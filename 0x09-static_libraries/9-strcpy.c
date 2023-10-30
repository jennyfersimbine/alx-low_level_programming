#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: points to a buffer
 * @src: string pointed by this to cp
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i, j, len;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len + 1; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
