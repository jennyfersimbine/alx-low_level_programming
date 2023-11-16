#include "lists.h"

/**
 * print_list - print singly linked list
 * @h: head
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t  *p = h;
	size_t nr_nodes = 0;

	while (p != NULL)
	{
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u] %s\n", p->len, p->str);
		}
		p = p->next;
		nr_nodes++;
	}
	return (nr_nodes);
}
