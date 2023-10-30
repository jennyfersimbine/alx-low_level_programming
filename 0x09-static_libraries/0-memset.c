#include "main.h"

/**
 * _memset - fills first n byts of mmory area pointd to by s w/ const byt b
 * @s: pointer
 * @b: constant byte
 * @n: bytes of memor
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
