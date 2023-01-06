#include "main.h"
#include <string.h>

/**
 * _strncpy - copy string with function
 * @dest: copies src
 * @src: will be copied
 * @n: bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
