#include "lists.h"
#include <stdio.h>

/**
 * free_list - is a function that frees a list
 * @head: pointer to the head of the list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tem;

	while (head)
	{
		tem = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
