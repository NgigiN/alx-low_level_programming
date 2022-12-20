#include <stdio.h>
#include "main.h"

/**
 * print_rev - outputs the string passed to it in reverse
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	if ('\0' == s[0])
	{
	}
	else
	{
		print_rev(&s[1]);
		putchar(s[0]);
	}
}
