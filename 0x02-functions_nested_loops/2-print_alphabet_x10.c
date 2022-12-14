#include "main.h"

/**
 * print_alphabet_x10 - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int n;
	char c;

	for (n = 1; n <= 10; n++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
