#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 * @a: matrix parameter
 * @size: size of parameter
 */

void print_diagsums(int *a, int size)
{
	int diag_1 = 0, diag_2 = 0, row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diag_1 += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diag_2 += a[i];
	}
	printf("%d, %d\n", diag_1, diag_2);
}
