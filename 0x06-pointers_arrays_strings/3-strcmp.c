#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: parameter to be compared
 * @s2: parameter to be compared
 * Return: 0 if same less than 1 if not s1 is less than the other
 * and greater than 1 if greater than the other
 */

int _strcmp(char *s1, char *s2)
{
	int c, d;

	c = 0;

	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}

	d = s1[c] - s2[c];
	return (d);
}
