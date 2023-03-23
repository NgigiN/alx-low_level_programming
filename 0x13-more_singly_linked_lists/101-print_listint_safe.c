#include "lists.h"

/**
 * print_listint_safe - function that prints a linked list
 * with loop safely
 * @head: pointer to the first node
 * Return: new_node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *l = NULL;
	size_t counter = 0;
	size_t new_n;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		counter++;
		l = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (tmp == l)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (counter);
			}
			l = l->next;
			new_n++;
		}
		if (head)
			exit(98);
	}
	return (counter);
}
