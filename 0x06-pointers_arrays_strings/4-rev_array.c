#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * reverse_array - function that reverses an array passed
 * to it
 * @a: parameter to be operated upon
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int t, c = 0;

	n = n - 1;
	while (c <= n)
	{
		t = a[c];
		a[c++] = a[n];
		a[n--] = temp;
	}
}
