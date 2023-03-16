#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements is a list
 * @h: pointer to the beginning of the list
 * Return: number of nodes
 *
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
