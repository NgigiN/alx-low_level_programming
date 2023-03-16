#include "lists.h"

/**
 * dlistint_len - counts the number of nodes
 * @h: pointer to the beginning of the list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while(h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
	}
	return (count);
}
