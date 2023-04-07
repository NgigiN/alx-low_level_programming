#include "hash_tables.h"

/**
 * hash_table_set - this is a function that adds elements to a hash table
 *
 * @ht: hash table i want add or key/value to be updated
 * @key: is my key(which can not be an empty string)
 * @value: data associated with the key(can be duplicated and can be empty)
 *
 * Return: 1 if successful, 0 otherwise)
 * Incase of collision the new node is added at the beginning of the list
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || *key == '\0' || value == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	/*checking if it exists*/
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	/*absen key thus creates a new node at the beginnig of the list*/
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
