#include "lists.h"

/**
 * get_nodeint_at_index - find node in list
 * @head: pointer to head of list
 * @index: index of node
 *
 * Return: pointer to nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *n;
	unsigned int i;

	n = head;
	for (i = 0; n != NULL && i < index; i++)
	{
		n = n->next;
	}
	return (n == NULL ? NULL : n);
}
