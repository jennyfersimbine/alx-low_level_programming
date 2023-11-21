#include "lists.h"

/**
 * free_listint2 - function that frees listint and sets head to null
 * @head: head of list
 */

void free_listint2(listint_t **head)
{
	listint_t *node_ref = *head;

	while (*head != NULL)
	{
		node_ref = *head;
		*head = node_ref->next;
		free(node_ref);
	}
}
