#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that adds all its parameters
 * @n: the number of parameters to be passed
 * return: the sum of the parameters passed
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
        int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	else
	{
	va_list numbers;
	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(numbers, int);
	}

	va_end(numbers);

	return (sum);
	}
}
