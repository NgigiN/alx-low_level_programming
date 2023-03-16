#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		count++;
	}
	return (count);
}
