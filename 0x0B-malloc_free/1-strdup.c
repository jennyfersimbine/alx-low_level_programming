#include "main.h"

/**
 * _strdup - contains a copy of the string given as a parameter
 * @str: string to copy
 * Return: pointer to the newly allocated string
 */

char *_strdup(char *str)
{
	char *arch;
	unsigned int i, j, lens;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	lens = i + 1;
	arch = malloc(sizeof(char) * lens);
	if (arch == NULL)
	{
		arch = "memory allocation failed";
		return (arch);
	}
	for (j = 0; j < lens; j++)
	{
		arch[j] = str[j];
	}
	return (arch);
	free(arch);
}
