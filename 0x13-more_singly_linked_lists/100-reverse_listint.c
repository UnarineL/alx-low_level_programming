#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer to pointer of the head
 *
 * Return: pointer to the head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *last_node, *next_node;

	last_node = NULL;
	next_node = NULL;
	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = last_node;
		last_node = *head;
		*head = next_node;
	}
	*head = last_node;
	return (*head);
}
