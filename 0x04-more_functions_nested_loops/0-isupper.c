#include "main.h"
#include "stdio.h"

/**
 * _isupper(int c): checks if a character input is uppercase
 * or lowercase
 * Return: 1 if uppercase and 0 if lowercas
 * @c: is character input by the user
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
		return (0);
}
