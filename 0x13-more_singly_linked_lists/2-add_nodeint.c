#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of linked
 * list
 * @head: pointer to the first node in the list
 * @n: integer to insert in the new node;
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
