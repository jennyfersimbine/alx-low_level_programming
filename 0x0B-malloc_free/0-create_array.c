#include "main.h"

/**
 * create_array - create array and intialize with c
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arch;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	arch = malloc(size * sizeof(char));
	if (arch == NULL)
	{
		arch = "memory allocation failed";
		return (arch);
	}
	i = 0;
	while (i < size)
	{
		arch[i] = c;
		i++;
	}
	return (arch);
}
