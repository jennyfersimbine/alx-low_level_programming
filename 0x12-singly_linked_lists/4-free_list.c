#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head
 */

void free_list(list_t *head)
{
	list_t *node_ref = head;

	while (head != NULL)
	{
		node_ref = head;
		head = head->next;
		free(node_ref->str);
		free(node_ref);
	}
}
