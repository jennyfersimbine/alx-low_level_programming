#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print string in reverse
 * @s: parameter string
 * Return: none
 */

void print_rev(char *s)
{
	int j = 0;
	while (s[j] != '\0')
	{
		j++;
	}
	for (j -= 1; j >=0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
