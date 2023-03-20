#include "main.h"

/**
 * _strchr - returns a pointer where the first
 * instance of c is is
 * @s: input
 * @c: input
 * Return: pointer to that character or zero
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] <= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
