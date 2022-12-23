#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "_putchar.c"

/**
 * string_toupper - upper ch
 * @c:parameter
 * Return: c
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i]; i++)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
			_putchar(*c);
		}
	}
	return (0);
}
