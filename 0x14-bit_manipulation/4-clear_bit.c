#include "main.h"

/**
 * clear_bit - sets the value of a specific
 * bit to 0
 * @index: location of the bit, starts from 0
 * n: parameter whose binary is being changed
 * Return: 1 if it worked and -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
