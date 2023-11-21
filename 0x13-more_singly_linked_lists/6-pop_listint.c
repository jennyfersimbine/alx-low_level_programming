#include "lists.h"

/**
 * pop_listint - delete head.
 * @head: head
 * Return: node data
 */

int pop_listint(listint_t **head)
{
	listint_t *p = *head;

	if (*head == NULL)
		return (0);
	p = p->next;
	return (p->n);
}
