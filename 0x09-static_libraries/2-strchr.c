#include "main.h"
#include <stddef.h>

/**
 * _strchr - ocates a character in a string.
 * @s: pointer to search
 * @c: char to locate
 * Return: pointer to the char in string
 */

char *_strchr(char *s, char c)
{
	int i, j, len;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (j = 0; j < len; j++)
	{
		if (s[j] == c)
		{
			p = &s[j];
			return (p);
		}
	}
	return (0);
}
