#include "main.h"

/**
 * print_diagonal - prints diagonals
 * @n: parameters
 */

void print_diagonal(int n)
{
	int j;

	if (n > 0)
	{
	for (int i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			putchar(' ');
		}
		-putchar(92);
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
