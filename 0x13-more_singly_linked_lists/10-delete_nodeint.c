#include "lists.h"

/**
 * delete_nodeint_at_index - del the node at index of a listint_t linked list
 * @head: head
 * @index: the index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head, *nprev;
	unsigned int i, nr;

	nr = p->n;
	if (p != NULL && nr == index)
	{
		(*head) = (*head)->next;
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		nprev = p;
		p = p->next;
	}
	if (p == NULL)
	{
		return (-1);
	}
	nprev->next = p->next;
	return (1);
}
