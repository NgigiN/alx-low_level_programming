#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints elements of a list_t list
 * @h: list containing parameters to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}

	return (count++);
}
