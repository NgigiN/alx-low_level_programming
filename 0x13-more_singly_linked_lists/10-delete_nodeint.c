#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a specified index
 * @index: is the index of the node that should be deleted and starts
 * at 0
 * @head: is a pointer to the first node of the linked list
 * Return: 1 if successful, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(copy);
		return (1);
	}

	for (node = 0; node < (index - q); node++)
	{
		if (copy->next == NULL)
			return (-1);

		copy = copy->next;
	}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
