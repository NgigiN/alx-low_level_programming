#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: the input character
 * Return: 1 if it is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
