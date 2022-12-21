#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: parameter to be concatenated
 * @src: parameter to be concatendated
 * @n: parameter stating length of string
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0, j;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++, l++)
	{
		dest[l] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}
