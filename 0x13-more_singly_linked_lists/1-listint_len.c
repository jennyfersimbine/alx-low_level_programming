#include "lists.h"

/**
 * listint_len - length of list
 * @h: head
 * Return: length
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	size_t len = 0;

	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	return (len);
}
