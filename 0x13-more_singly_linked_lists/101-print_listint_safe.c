#include "lists.h"

/**
 * print_listint_safe - prints a listint_t
 * @head: a pointer to head
 *
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *temp;
	size_t i;

	i = 0;
	node = headu;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		i++;
		temp = node->next;
		if (temp >= node)
		{
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			exit(98);
		}
		node = temp;
	}
	return (i);
}
