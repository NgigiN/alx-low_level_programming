#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps two numbers input by the user
 * @a: parameter to be swapped
 * @b: parameter to be swapped
 * int temp: temporary value created for swapping
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
