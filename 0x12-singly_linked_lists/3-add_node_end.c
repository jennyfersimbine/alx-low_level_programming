#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head
 * @str: str for new element
 * Return: address of new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *linklist = *head;
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
	nlink->len = strlen(str);

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
