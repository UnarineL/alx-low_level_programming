#include "lists.h"

/**
 * find_listint_loop - find a loop in linked list
 * @head: pointer to head
 *
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f_node, *s_node;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}

	f_node = head->next;
	s_node = (head->next)->next;

	while (s_node)
	{
		if (f_node == s_node)
		{
			f_node = head;

			while (f_node != s_node)
			{
				f_node = f_node->next;
				s_node = s_node->next;
			}
			return (f_node);
		}
		f_node = f_node->next;
		s_node = (s_node->next)->next;
	}
	return (NULL);
}
