#include "lists.h"

/**
 * add_nodeint - adds new node at the beginnning of listint_int
 * @head: pointer to a pointer h
 * @n: elements
 *
 * Return: address of new elements or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
