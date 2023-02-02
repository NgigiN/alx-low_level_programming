#include "lists.h"

/**
 * listint_len - function that returns the number of
 * elements in a linked list
 * @h: pointer to beginning of the linked list.
 * Return: the number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
	}
	return (counter);
}
