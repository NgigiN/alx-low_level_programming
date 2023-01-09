#include "main.h"

/**
 * _isupper - prints 1 if uppercase and 0 if otherwise
 * @c: parameter to be checked
 *
 * Return: 1 if uppercase or 0
 */

int _isupper(int c)
{
	if(c <= 'A' && c <= 'Z')
		return (1);
	else 
		return (0);
}
