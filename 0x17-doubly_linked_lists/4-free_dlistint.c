#include "lists.h"
/**
 * free_dlistint - frees a double linked list
 * @head: is the pointer to the beginning of the list
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
