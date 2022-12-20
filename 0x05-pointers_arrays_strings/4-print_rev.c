#include <stdio.h>
#include "main.h"

/**
 * print_rev - outputs the string passed to it in reverse
 * @s: the string to be printed in reverse
 */

void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		putchar(*s);
	}
}
