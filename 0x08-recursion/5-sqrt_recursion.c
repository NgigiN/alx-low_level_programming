#include "main.h"

/**
 * helper - aids to find the squareroot
 * @n: number
 * @g: passed number
 * Return: squareroot
 */

int helper(int n, int g)
{
	if (g * g == n)
		return (g);
	if (g * g > n)
		return (-1);
	return (helper(n, g + 1));
}

/**
 * _sqrt_recursion - function that returns square root
 * of a number
 * @n: integer parameter whose squareroot to be found
 * Return: squareroot of 'n'
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (helper(n, 1));
}
