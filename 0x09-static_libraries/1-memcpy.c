#include "main.h"
#include <string.h>

/**
 * _memcpy - cpy memory are
 * @dest: to
 * @src: to..
 * @n: n
 * Return: result
*/

void *_memcpy(void *dest, void *src, size_t n)
{
	char *tpcsrc = (char *)src;
	char *tpcdest = (char *)dest;

	for (int i = 0; i < n; i++)
	{
		tpcdest[i] = tpcsrc[i];
	}
}
