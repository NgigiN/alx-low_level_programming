#include  <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed y a separator
 * @separator: character to be between the numbers
 * @n: the numbers of arguments to be passed
 * return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int l;
	va_list nums;

	va_start(nums, n);

	for (l = 0; l < n; l++)
	{
		printf("%d", va_arg(nums, int));
		if (l != n - 1 && separator)
			printf("%s ", separator);
	}
	printf("\n");
	va_end(nums);
}
