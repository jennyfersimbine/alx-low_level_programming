#include "main.h"
#include <string.h>

/**
 * memset - fucntion that fills memory with a constant byte.
 * @s: points the memory are
 * @b: constant bytes to fill
 * @n: n bytes of memory area
 * Return:  s
 */

char *_memset(void *s, char b, unsigned int n)
{
	char *result;

	result = *memset(*s, b, n);
	return (*result);
}
