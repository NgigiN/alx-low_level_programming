#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - is a function that executes a function passed to it
 * on each element of an 'array'
 * @array: parameter subject tothe  the function
 * @size: size of the array
 * @action: pointer to the function acting on each element
 * return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t l = 0;

	for (; l < size; l++)
	{
		action(array[size]);
	}
}
