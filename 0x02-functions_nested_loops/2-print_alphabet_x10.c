#include "main.h"

/**
 * print_alphabet_x10: prints the alphabet ten times in lowercase
 *
 * return: Always (0) Success
 */

void print_alphabet_x10(void)
{
	char t = 'a';
	int n = 1;

	while (n <= 10)
	{
		while (t <= 'z')
		{
			_putchar(t);
			t++;
		}
		_putchar('\n');
		n++;
	}
}
