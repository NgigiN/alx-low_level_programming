#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked
 * list
 * @head: pointer to the beginning of the linked list
 * @n: integer passed to be input into the new node
 * Return: pointer to new element if successful or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	return (*head);
}
