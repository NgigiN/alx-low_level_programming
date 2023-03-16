#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 * @head: Pointer to the head node of the list
 * @index: Index of the node to return
 * Return: Pointer to the nth node, or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (count == index)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
