#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head
 * @str: str for new element
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nlink = (list_t *) malloc(sizeof(list_t));

	if (nlink == NULL)
	{
		free(nlink);
		return (NULL);
	}
	nlink->str = strdup(str);
	if (nlink->str == NULL)
	{
		free(nlink->str);
		return (NULL);
	}

	nlink->next = *head;
	*head = nlink;

	nlink->len = strlen(str);
	return (nlink);
}
