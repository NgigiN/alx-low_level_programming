#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer to end
 * @str: data to be added to the list.
 * Return: address of the new element.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t count = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[count])
		count++;

	new->len = count;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = new;

	else
	{	
		while (temp->next != NULL)
		temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
