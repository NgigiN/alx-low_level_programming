#include <stdio.h>
#include "main.h"

/**
 * print_rev - outputs the string passed to it in reverse
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
