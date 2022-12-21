#include <stdio.h>
#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: where the string is to be copied to
 * @src: parametere containing the source string
 * @n: parameter of length of the string
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
