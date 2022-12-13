#include "main.h"

/**
 * _abs - computes the absolute value
 *
 * @n: integer input for checking
 *
 * Return: returns an usnigned int value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}

	else
	{
		n *= -1;
		return (n);
	}
}
