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

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
