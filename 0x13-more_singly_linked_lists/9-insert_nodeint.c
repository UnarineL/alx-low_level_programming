#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given postion
 * @head: pointer to a pointer to the head
 * @idx: index of list to add new node
 * @n: value of new node
 *
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *curr_node;

	new_node = malloc(sizeof(listint_t));
	curr_node = *head;
	if (head == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = curr_node;
		*head = new_node;
		return (new_node);
	}


	for (i = 0; curr_node != NULL && i < idx - 1; i++)
	{
		curr_node = curr_node->next;
	}
	if (curr_node == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = curr_node->next;
	curr_node->next = new_node;

	return (new_node);
}
