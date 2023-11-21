#include "lists.h"

/**
 * free_listint - free list
 * @head: head od list
 */

void free_listint(listint_t *head)
{
	listint_t *node_ref = head;

	while (head != NULL)
	{
		node_ref = head;
		head = head->next;
		free(node_ref);
	}
}
