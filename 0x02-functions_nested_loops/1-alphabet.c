#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char t = 'a';

	while (t <= 'z')
	{
		_putchar(t);
		t++;
	}

	_putchar('\n');

}
