#include "lists.h"

/**
 * pop_listint - deletes head node and return head node's data
 * @head: pointer to a pointer to the head node
 *
 * Return: data of orginal head or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	temp = *head;
	if (temp == NULL)
	{
		return (0);
	}
	*head = temp->next;
	data = temp->n;
	free(temp);

	return (data);
}
