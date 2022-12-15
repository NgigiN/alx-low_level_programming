#include "main.h"

/**
 * print_line - prints line
 * @n: param
 */

void print_line(int n)
{
	if (n > 0)
	{
	for (int c = 0; c < n; c++)
	{
		putchar(95);
	}
	putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
