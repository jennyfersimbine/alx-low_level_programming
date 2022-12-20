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
	char temp;
	int i, left, right, lengt;

	lengt = strlen(s);
	left = 0;
	right = lengt - 1;
	for (i = left; i < right; i++)
	{
		temp = s[i];
		s[i] = s[right];
		s[right] = temp;
		right--;
	}
	puts(s);
}
