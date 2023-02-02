#include "lists.h"

/**
 * sum_listint - adds all the data(n) in a linked list
 * @head: pointer to the first node of the linked list
 * Return: sum of all the data or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
