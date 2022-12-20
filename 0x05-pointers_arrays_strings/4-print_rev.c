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
	int i, lengt, temp;

	lengt = strlen(s);
	for(i = 0; i < lengt; i++)
	{
		temp = s[i];
		s[i] = s[lengt - i - 1];
		s[lengt - i - 1] = temp;
	}
	puts(s);
}
