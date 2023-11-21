#include "lists.h"

/**
 * add_nodeint - add node at the beginning
 * @head: head
 * @n: nr to add
 * Return: address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nlink = (listint_t *) malloc(sizeof(listint_t));

	if (nlink == NULL)
	{
		free(nlink);
		return (NULL);
	}

	nlink->n = n;
	nlink->next = *head;
	*head = nlink;

	return (nlink);
}
