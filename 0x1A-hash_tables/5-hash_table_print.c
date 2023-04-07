#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is a pointer to the hash table
 * Values are printed in the corrected order array, list
 * if ht is NULL, don't print anything
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
