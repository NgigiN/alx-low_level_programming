#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * in a linked list
 * @head: is a pointer to the first node of the linked list
 * @idx: is the index in the linked list where the node will be added
 * @n: is the data to be input in the new node
 * index starts at 0
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *temp = *head;
	size_t i = 0;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

		if (!*head && !idx)
		{
			*head = node;
			return (node);
		}
		else if (!*head)
			return (NULL);

		else if (!idx)
		{
			node->next = temp;
			*head = node;
			return (node);
		}

	while (temp && i < (idx - 1))
	{
		temp = temp->next;
		i++;
	}

	if (!temp)
		return (NULL);

	node->next = temp->next;
	temp->next = node;

	return (node);
}
