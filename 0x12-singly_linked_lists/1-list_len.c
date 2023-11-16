#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: head of list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	size_t len = 0;

	while (p != NULL)
	{
		len++;
		p = p->next;
	}
	return (len);
}
