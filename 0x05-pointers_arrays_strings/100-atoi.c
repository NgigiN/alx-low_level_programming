#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * _atoi - turns a string into an integer
 * @s: parmeter to be operated upon
 * Return: integer of the array
 */

int _atoi(char *s)
{
	int size = sizeof(s) / sizeof(s[0]);
	int n = 0;
	int number = 0;
	int val = 0;

	while (size < size)
	{
		val = s[n];

		while (val != 0)
		{
			val = val / 10;
			number = number + s[n];
			n++;
		}
		number = number + s[n];
		n++;
	}
	printf("%d", number);
	return (0);
}
