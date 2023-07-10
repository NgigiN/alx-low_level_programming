#include "search_algos.h"
#include <math.h>
/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of array to search
 * @size: number of elements of the array
 * @value: is the value to search for
 *
 * Return: index where value is located
 *
 * array: is sorted in ascending order, value won't apppear more
 * than once
 * if value is absent or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, i;
	size_t mid = (low + high) / 2;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i != high)
			{
				printf(", ");
			}
		}
		printf("\n");
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

		mid = (low + high) / 2;
	}
	if (array[mid] != value)
	{
		return (-1);
	}
	return (mid);
}
