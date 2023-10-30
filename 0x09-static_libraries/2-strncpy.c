#include "main.h"
#include <stdio.h>

/**
 * _strncpy -  function that copies a string
 * @dest: destination string
 * @src: str to copy
 * @n: bytes to copy, if nor enought add null bytes
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0;
	int i;

	while (src[len_src] != '\0')
	{
		len_src++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
