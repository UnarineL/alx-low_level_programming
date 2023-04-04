#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elemnts of listint_t
 * @h: elements 
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
