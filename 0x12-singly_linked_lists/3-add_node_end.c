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
	
	if (str != NULL)
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);

		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else 
		{
			temp = *head;
			while (temp->next)
				temp = temp->next;

			temp->next = new;
			return (temp);
		}
	}

	return (NULL);
}
