#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a specified index
 * @index: is the index of the node that should be deleted and starts
 * at 0
 * @head: is a pointer to the first node of the linked list
 * Return: 1 if successful, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{{
	listint_t *temp, *node_to_delete;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	node_to_delete = temp->next;
	temp->next = node_to_delete->next;
	free(node_to_delete);
	return (1);
}

