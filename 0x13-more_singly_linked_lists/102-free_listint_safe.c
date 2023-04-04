#include "lists.h"

/**
 * free_list2 - free linked list
 * @head: list's head
 *
 * Return: nothing
 */
void free_list2(list_t **head)
{
	list_t *temp, *curr_node;

	if (head != NULL)
	{
		curr_node = *head;
		while ((temp = curr_node) != NULL)
		{
			curr_node = curr_node->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - free linked list
 * @h: pointer to a pointer of h
 *
 * Return: size of list free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes;
	list_t *head_ptr, *new, *append;
	listint_t *curr_node;

	head_ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
		{
			exit(98);
		}

		new->ptr = (void *)*h;
		new->next = head_ptr;
		head_ptr = new;

		append = head_ptr;

		while (append->next != NULL)
		{
			append  = append->next;
			if (*h == append->ptr)
			{
				*h = NULL;
				free_list2(&head_ptr);
				return (nodes);
			}
		}
		curr_node = *h;
		*h = (*h)->next;
		free(curr_node);
		nodes++;
	}
	*h = NULL;
	free_list2(&head_ptr);
	return (nodes);
}
