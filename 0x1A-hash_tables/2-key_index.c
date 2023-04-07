#include "hash_tables.h"

/**
 * key_index - sends a key to the hash function which generates an index
 * @key: is the unique identifier
 * @size: is the size of the array of the hash table
 *
 * Return: the index at which key/value should be stored in the array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
