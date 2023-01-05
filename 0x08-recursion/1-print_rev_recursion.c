#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string parameter to be reversed
 */

void _print_rev_recursion(char *s)
{
	int g = strlen(s);

	while (g >= 0)
	{
		putchar(s[g]);
		g--;
	}
}
