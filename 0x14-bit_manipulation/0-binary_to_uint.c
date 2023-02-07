#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned integer
 * @b: pointer the binary number
 * Return: the converted number or 0 if there is any other
 * character apart from 0 and 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int answer = 0;
	int len = strlen(b), i;

	if (b == NULL)
		return (0);
	else
	{
	for (i = 0; i < len; i++)
	{
		if (*b == '1' || *b == '0')
		{
			if (b[len - i - 1] == '1')
			{
				answer += (1 << i);
			}
		}
		else
		{
			return (0);
		}
	}
	}
	return (answer);
}
