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
	int i; 
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] -32;
		}
	}
	return (0);
}
