#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * an usigned integer
 * @b: is a pointer to the string of characters
 * made up of zeros and ones
 * Return: the converted number or '0' if there is
 * a character not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer;
	int len = 0, base_two;

	if (b == NULL)
		return (0);
	
	len = strlen(b);
	len --;

	for (base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			answer += base_two;
		}
	}

	return (answer);
}
