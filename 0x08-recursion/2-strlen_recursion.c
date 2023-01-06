#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - return length of string (factorial)
 * @s: string to count
 * Return: result of count or 0
 */

int _strlen_recursion(char *s)
{
	int result;

	if (*s == '\0')
	{
		return (0);
	}
	result = 1 + _strlen_recursion(s + 1);
	return (result);
}
