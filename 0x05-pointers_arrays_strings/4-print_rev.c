#include <stdio.h>
#include "main.h"

/**
 * print_rev - outputs the string passed to it in reverse
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	int len, i, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;
	i = 0;
	half = len / 2;

	while (half--)
	{
		temp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
