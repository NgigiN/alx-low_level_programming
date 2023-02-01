#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked
 * list 'listint_int'
 * @h: pointer to head of the linked list
 * Return: number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (counter);
	}

	else 
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
