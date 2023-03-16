#include "lists.h"

/**
 * sum_dlistint - sums all the data (n) of
 * a linked list
 * @head: pointer to the beginning of the list
 * Return: sum of the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
