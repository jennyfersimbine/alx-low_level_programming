#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: destination string
 * @src: string to append
 * @n: bytes to use from src
 * Return: pointer to concantenated str
 */

char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int len_src = 0;
	int i;

	while (dest[len_dest] != '\0')
	{
		len_dest++;
	}

	while (src[len_src] != '\0')
	{
		len_src++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[len_dest + i] = src[i];
	}
	if (len_src < n)
		dest[len_dest + i] = '\0';
	return (dest);
}
