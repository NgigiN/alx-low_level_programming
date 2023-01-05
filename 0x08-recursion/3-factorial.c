#include "main.h"

/**
 * factorial - finds the factorial of a given number
 *@n: positive integer parameter
 *Return: integer factorial of the n parameter
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
