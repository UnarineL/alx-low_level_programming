#include "lists.h"

/**
 * list_len - list the elements
 * @h: list of elements
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
