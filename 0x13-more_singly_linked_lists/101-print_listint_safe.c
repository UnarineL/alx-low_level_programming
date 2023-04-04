#include "lists.h"
/**
 * free_list - free linked list
 * @head: head of the list
 *
 * Return: nothng
 */
void free_list(list_t **head)
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
 * print_listint_safe - prints a listint_t
 * @head: a pointer to head
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes;
	list_t *head_ptr, *new, *sum;

	nodes = 0;
	head_ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(list_t));

		if (new == NULL)
		{
			exit(98);
		}
		new->ptr = (void *)head;
		new->next = head_ptr;
		head_ptr = new;

		sum = head_ptr;

		while (sum->next != NULL)
		{
			sum = sum->next;
			if (head == sum->ptr)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_list(&head_ptr);
				return (nodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}
	free_list(&head_ptr);
	return (nodes);
}
