#include "function_pointers.h"

/**
 * int_index - is a funcion that calls function 'cmp'
 * which searches for an integer in 'array'
 * @array: parameter subject to be searched through
 * @size: size of the array
 * @cmp: function called to search for the integer
 * return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
