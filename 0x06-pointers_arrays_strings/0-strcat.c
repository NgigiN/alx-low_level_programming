#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: final result of the concatenated strings
 * @src: parameter to be concatenated
 * Return: a pointer to the concatenated char string
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, j;

	while (dest[l] != '\0')
	{
		l++;
	}
	for (j = 0; src[j] != '\0'; j++, l++)
	{
		dest[l] = src[j];
	}

	dest[l] = '\0';
	return (dest);
}
