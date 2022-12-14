#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * fills the first n bytes of the memory area pointed
 * to by s with the constant b.
 * @s: pointer to memory
 * @b: constant to fill memory with
 * @n: bytes of the memory area to be filled.
 *
 * Return: pinter to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}
	return (s);
}
