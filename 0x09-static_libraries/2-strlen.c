#include "main.h"

/**
 * _strlen -return s length of string
 * @s: string
 *
 * Return: length os tr
 */

int _strlen(char *s)
{
	int len, i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	return (len);
}
