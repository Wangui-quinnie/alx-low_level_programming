#include <stdio.h>
#include "hash_tables.h"

/**
  *hash_table_print - print the contents of a hash table
  *@ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int is_first = 1;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (is_first)
				is_first = 0;
			else
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
