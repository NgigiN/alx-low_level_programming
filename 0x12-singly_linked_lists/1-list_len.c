#include "lists.h"
#include <stdio.h>

/**
 * list_len - prints the number of elements
 * in a linked list passed to it
 * @h: list passed
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
