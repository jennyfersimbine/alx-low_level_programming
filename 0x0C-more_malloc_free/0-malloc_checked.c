#include "main.h"

/**
* malloc_checked - allocates memory using malloc
* @b: size of memory
* Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(b * sizeof(unsigned int *));
	if (c == NULL)
	{
		exit(98);
	}
	return (c);
}
