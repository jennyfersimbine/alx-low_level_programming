#include <stdio.h>
#include <string.h>

/**
 * _strlen - return length of a string
 * @s: pointer paramenter
 * Return: length of string
 */

size_t _strlen(const char *s)
{
	size_t length_str = 0;

	while (*s++)
	{
		length_str++;
	}
	return (length_str);
}
