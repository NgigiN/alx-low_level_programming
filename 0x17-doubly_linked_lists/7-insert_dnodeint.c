#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given
 * position
 * @h: pointer to the beginning of the list
 * @idx: index of the list the new node is to be added
 * @n: value of n to be assigned to the new node
 *
 * Return: address of the new node, of NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *current_node = NULL;
	unsigned int i;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_nodeint(h, n));

	current_node = *h;

	for (i = 0; i < idx - 1 && current_node; i++)
	{
		current_node = current_node->next;
	}

	if (!current_node)
		return (NULL);

	if (!current_node->next)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node->next;
	new_node->prev = current_node;
	current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}

