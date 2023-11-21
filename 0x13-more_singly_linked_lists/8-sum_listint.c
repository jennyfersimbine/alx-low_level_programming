#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: head
 * Return: the sum of all
 */

int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum;

	while (head != NULL)
	{
		p = p->next;
		sum += p->n;
	}
	return (sum);
}
