#include "main.h"
#include <stdlib.h>
#include "_putchar.c"
/**
 * create_array - create array of chars and initialize with specific char
 * @size: size of array
 * @c: intiaial char
 * Return: arc;
 */

char *create_array(unsigned int size, char c)
{
	char *arc;
	unsigned int i;

	if (size == 0)
	{return (NULL);

	}

	arc = malloc(size * sizeof(char));
	arc[0] = c;
	i = 0;
	while (i < size)
	{
		_putchar(arc[i]);
	}
	if (arc == NULL)
	{
		return (NULL);
	}
	return (arc);
}
