#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string and returns a pointer
 * @str: string
 * Return: Pointer of NULL
 */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	len++;
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = str[i];
	return (ptr);
}
