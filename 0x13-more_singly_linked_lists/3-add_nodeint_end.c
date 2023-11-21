#include "lists.h"

/**
 * add_nodeint_end - add node at the end of list
 * @head: head
 * @n: nr to new node
 * Return: address of new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *linklist = *head;
	listint_t *nlink = (listint_t *) malloc(sizeof(listint_t));

	if (nlink == NULL)
	{
		free(nlink);
		return (NULL);
	}
	nlink->n = n;

	if (*head == NULL)
	{
		*head = nlink;
		return (nlink);
	}
	while (linklist->next != NULL)
		linklist = linklist->next;

	linklist->next = nlink;
	return (nlink);
}
