#include "hash_tables.h"

/**
 * hash_table_delete - this function deletes a hash table
 * @ht: is the hash table
 *
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node_ptr, *tmp_node;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		node_ptr = ht->array[i];
		while (node_ptr)
		{
			tmp_node = node_ptr->next;
			free(node_ptr->key);
			free(node_ptr->value);
			free(node_ptr);
			node_ptr = tmp_node;
		}
	}
	free(ht->array);
	free(ht);
}
