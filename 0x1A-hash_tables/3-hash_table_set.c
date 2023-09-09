#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
  *hash_table_set - adds an element to the hash table
  *@ht: the hash table you want to add or update the
  *key/value pair to
  *@key: is the key which can't be an empty string
  *@value: the value associated with the key must be
  *duplicated and can be an empty string
  *Return: 1 if it succeeded 0 otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *temp = NULL;
	char *valuecopy, *keycopy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	valuecopy = strdup(value);

	if (valuecopy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = valuecopy;
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(valuecopy);
		return (0);
	}
	keycopy = strdup(key);
	if (keycopy == NULL)
		return (0);
	new_node->key = keycopy;
	new_node->value = valuecopy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
