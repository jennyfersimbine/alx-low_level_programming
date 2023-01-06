#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenate 2 strings
 * @dest: will be overwritten
 * @src: will overwrite dest string
 * @n: bytes
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
