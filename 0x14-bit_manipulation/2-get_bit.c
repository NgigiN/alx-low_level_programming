#include "main.h"

/**
 * get_bit - returns the value of a bit at a
 * given index
 * @index: is the index starting at 0
 * @n: is the number passed
 * Return: value of the bit at index or -1 if
 * an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}	
