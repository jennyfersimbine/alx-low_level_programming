#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares 2 strings
 * @s1: string one to compare
 * @s2: string to compare to first
 * Return: 0 if equal, other if not
 */

int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0;
	int len_s2 = 0;
	int i;

	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}

	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	if (len_s2 != len_s1)
		return (1);
	for (i = 0; i < len_s1; i++)
	{
	if (s2[i] != s1[i])
		return (1);
	}
	return (0);
}
