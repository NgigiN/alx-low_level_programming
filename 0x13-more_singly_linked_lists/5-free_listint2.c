#include "lists.h"

/**
 * free_listint2 - frees memory where a linked list
 * is and sets the pointer to NULL
 * @head: pointer to the first node of the linked list
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	head = NULL;
}
