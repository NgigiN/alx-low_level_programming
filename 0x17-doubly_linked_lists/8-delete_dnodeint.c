#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at a given index
 * @head: beginning of the double linked list
 * @index: position of the node to be deleted
 * Return: 1 if successful -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *prev = NULL;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	for (unsigned int i = 0; current != NULL && i < index; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = prev;
	}
	free(current);
	return (1);
}
