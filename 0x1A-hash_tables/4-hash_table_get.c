#include "hash_tables.h"

/**
 * hash_table_get - this function retrieves a value associated with a key
 * @ht: is the hashtable to be looked up
 * @key: is the key being looked for
 *
 * Return: value of asssociated key or NULL if the key could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	/*if any is empty or NULL the function returns NULL*/
	if (!ht || !key || !*key)
		return (NULL);
	/*gets the index of the desired key*/
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];

	/*traverses the linked list to find node with the matching key*/
	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
