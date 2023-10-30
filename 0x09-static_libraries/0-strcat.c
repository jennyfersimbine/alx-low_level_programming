#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination string
 * @src: string to append
 * Return: pointer to the dest with appended src
 */

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int len_src = 0;
	int lent = 0;
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	len_dest = i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	len_src = i;

	lent = len_dest + len_src + 1;
	for (j = 0; j < len_src; j++)
	{
		dest[len_dest + j] = src[j];
	}
	dest[lent] = '\0';
	return (dest);
}
