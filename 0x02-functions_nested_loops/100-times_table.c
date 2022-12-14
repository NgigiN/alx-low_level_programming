#include "main.h"
#include <stdio.h>

/**
 * print_times_table - outputs a multiplication table
 * for 10x10
 * @n: value input by the user
 *
 * Return: 0 Successs
 */

void print_times_table(int n)
{
	int r;
	int c;
	int product;

	if (n < 0 || n >= 15)
		return;
	for (r = 0; r <= n; r++)
	{
		for (c = 0; c <= n; c++)
		{
			product = (r * c);
			if (c == 0)
				_putchar('0' + product);
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + product);
				}
				else if (product > 9 && product < 100)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + ((product / 10) % 10));
					_putchar('0' + (product % 10));
				}
			}
		}
		_putchar('\n');
	}
}
