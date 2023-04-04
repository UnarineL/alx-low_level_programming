#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of list
 * @head: pointer to a pointer pf the head
 * @index: index of node to delete
 *
 * Return: 1 if deleted successfuly or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *last_node, *curr_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}

	last_node = *head;
	curr_node = (*head)->next;

	for (i = 1; curr_node != NULL && i < index; i++)
	{
		last_node = curr_node;
		curr_node = curr_node->next;
	}

	if (curr_node == NULL)
	{
		return (-1);
	}

	last_node->next = curr_node->next;
	free(curr_node);
	return (1);
}
