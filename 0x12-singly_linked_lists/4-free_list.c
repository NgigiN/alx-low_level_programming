#include "lists.h"
<<<<<<< HEAD
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list.
 * Return: no return.
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
=======
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
>>>>>>> ee20217100d8b55ac6d286b81a8356fb25cadfba
}
