#include "main.h"
#include <string.h>

/**
 * _memcpy - cpy memory are
 * @dest: to
 * @src: to..
 * @n: n
 * Return: result
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char result;

	result = *memcpy(*dest, *src, n);
	return (result);
}
