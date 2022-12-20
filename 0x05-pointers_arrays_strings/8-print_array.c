#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the values of an array
 * @a: array values passed to the function
 * @n: is the number of elements of the array to be printed
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + 1));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
