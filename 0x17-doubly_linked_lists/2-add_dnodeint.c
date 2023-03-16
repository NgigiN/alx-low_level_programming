#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a
 * double linked list
 * @head: Pointer to the head node
 * @n: value to be stored in the new node
 *
 * Return: Address of the new node, NULL of failure
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (new);
}
