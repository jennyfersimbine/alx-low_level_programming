#include "main.h"

/**
 * arg_size - calculate size of arg string
 * @str: arg string
 * Return: size in int
 */

int arg_size(char *str)
{
	int i, lens;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	lens = i;
	return (lens);
}

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: nr of args
 * @av: array of args
 * Return: pointer to string concan
 */

char *argstostr(int ac, char **av)
{
	char *arch;
	int i, j, k, lenarch, lens;

	if (ac == 0 || av == NULL)
		return (NULL);
	lenarch = 0;
	for (i = 0; i < ac; i++)
	{
		lenarch += arg_size(av[i]) + 1; /*+1 for \n on each arg*/
	}
	lenarch = lenarch + 1; /*+1 for null terminating*/

	arch = malloc(sizeof(char) * lenarch);
	if (arch == NULL)
		return (NULL);

	i = 0;
	for (j = 0; j < ac; j++)
	{
		lens = arg_size(av[j]);
		for (k = 0; k < lens; k++)
		{
			arch[i++] = av[j][k];
		}
		arch[i++] = '\n';
	}
	arch[i] = '\0';
	return (arch);
}
