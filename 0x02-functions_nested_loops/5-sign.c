#inlcude "main.h"

/**
 * print_sign - return - letter not lowercase, 1 if true
 *
 * @n : number to check
 * Return:0 or 1
 *
 */

int print_sign(int n);
{
	if (n < 0)
	{
		purtchar('-');
	}
	else if (n > 0)
	{
		putchar('0');
	}
	else
	{
		putchar('-');
	}
	return (0);
}
