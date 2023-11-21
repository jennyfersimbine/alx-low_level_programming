#include "lists.h"

/**
 * get_nodeint_at_index - get nth node of index
 * @head: head
 * @index: index
 * Return: the node of index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		p = p->next;
	}
	if (p == NULL)
		return (0);
	return (p);
}
