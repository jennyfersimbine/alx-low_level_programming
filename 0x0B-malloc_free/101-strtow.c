#include "main.h"

/**
 * strtow - splits a string into words
 * @str: string to split
 * Return: pinter to 2d array
 */

char **strtow(char *str)
{
	char **stret;
	int i, j, k, m, lenh, lenw;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	lenh = i;
	stret = malloc(sizeof(char *) * (lenh + 1));
	if (stret == NULL)
		return (NULL);
	k = 0;
	j = 0;
	while (j < lenh)
	{
		if (str[j] != ' ' || str[j] != '\t')
			j++;
		lenw = 0;
	while (str[j + lenw] != ' ' && str[j + lenw] != '\t' && str[j + lenw] != '\0')
		lenw++;
	if (lenw > 0)
	{
		stret[k] = malloc(sizeof(char) * (lenw + 1));
		if (stret[k] == NULL)
		{
			for (i = 0; i < lenh; i++)
				free(stret[i]);
		free(stret);
		return (NULL);
		}
		for (m = 0; m < lenw; m++)
			stret[k][m] = str[j + m];
		stret[k][lenw] = '\0';
		k++;
		j += lenw;
	}
	}
	stret[k] = NULL;
	return (stret);
}
