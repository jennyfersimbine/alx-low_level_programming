#include "main.h"
#include <string.h>

/**
 * memset - fucntion that fills memory with a constant byte.
 * @s: points the memory are
 * @b: constant bytes to fill
 * @n: n bytes of memory area
 * Return:  s
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *mem = s, value = c;

	for (i = 0; i < n; i++)
	{
		mem[i] = value;
	}
	return (mem);
}
