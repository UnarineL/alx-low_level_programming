#include "lists.h"

/**
 * sum_listint - sum of al data(n) of listint_t
 * @head: pointer to head
 *
 * Return: sum of all data(n) or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
