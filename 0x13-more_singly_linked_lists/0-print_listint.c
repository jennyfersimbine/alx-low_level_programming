#include "lists.h"

/**
 * print_listint - print list
 * @h: pointer to headhead
 * Return: nr of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t  *p = h;
	size_t nr_nodes = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		nr_nodes++;
	}
	return (nr_nodes);
}
