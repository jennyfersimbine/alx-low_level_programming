#include "lists.h"

/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: head
 * @idx: index
 * @n: data
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nlink = (listint_t *) malloc(sizeof(listint_t));
	listint_t *p = *head, *nprev;
	unsigned int i;

	if (nlink == NULL)
	{
		free(nlink);
		return (NULL);
	}

	for (i = 0; i < idx; i++)
	{
		nprev = p;
		p = p->next;
	}
	if (p == NULL)
	{
		free(nlink);
		return (NULL);
	}
	nlink->n = n;
	nprev->next = nlink;
	nlink->next = p;

	return (nlink);
}
