#include "main.h"

/*
 * char *_memcpy - copies n bytes from memory area src to dest
 * @dest: parameter where memory is copied
 * @src: parameter where memory to be copied
 * @n: where data is copied
 * Return: pointer to a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			dest[i] = src[i];
	}

	return (dest);
}
