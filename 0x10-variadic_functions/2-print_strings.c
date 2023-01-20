#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followewd by a new line
 * @separator: string(small one) printed between the strings
 * @n: the number of parameters to be passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int y;
	va_list letters;

	va_start(letters, n);
		for (y = 0; y < n; y++)
		{
			if (va_arg(letters, char*) == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", va_arg(letters, char*));
				if (separator && y < n - 1)
					printf("%s", separator);
			}
		}
	va_end(letters);
	printf("\n");
}
