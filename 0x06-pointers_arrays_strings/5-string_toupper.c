#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - upper ch
 * @c:parameter
 * Return: c
 */

char *string_toupper(char *c)
{
	char *ret;
	for (int i = 0; i < sizeof(c); i++)
	{
		ret = putchar(toupper(c[i]));
	}
			return (ret);
}
