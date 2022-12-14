#include "main.h"

/**
 * print_sign - return - letter not lowercase, 1 if true
 *
 * @n : number to check
 * Return:0 or 1
 *
 */

int print_sign(int n)
{
	int t;

	if (n < 0)
	{
		t = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		t = 0;
		_putchar('0');
	}
	else
	{
		t = 1;
		_putchar('+');
	}
	return (t);
}
