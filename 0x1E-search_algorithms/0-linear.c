#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * of integers using Linear search algorithm
 * @array: is a pointer to first element of array to search through
 * @size: number of elements in the array
 * @value: is the value to search for
 * Return: first index where value is located
 *
 * if value is not present of if array is NULL function return -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t l = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (l = 0; l < size - 1; l++)
	{
		if (array[l] != value)
		{
			printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		}
		else
		{
			printf("Value checked array[%ld] = [%d]\n", l, array[l]);
			return (l);
		}
	}
	return (-1);
}
