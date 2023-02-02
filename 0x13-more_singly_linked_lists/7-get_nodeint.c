#include "lists.h"

/**
 * get_nodeint_at_index - function that returns a pointer
 * to the nth node of a linked list
 * @head: is the beginning pointer of the linked list
 * @index: is the index of the node  starting from 0
 * Return: pointer to the nth node or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	listint_t *current = head;

	for (i = 0; i < index && current; i++)
		current = current->next;

	return (current);
}
