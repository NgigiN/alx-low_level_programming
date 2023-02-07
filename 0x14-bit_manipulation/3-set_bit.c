#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given
 * index
 * @n: parameter to be changed
 * @index: position of bit to be changed
 * Return: 1 if it works and -1 if it fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
