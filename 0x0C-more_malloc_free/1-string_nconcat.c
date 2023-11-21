#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2
 * Return: pointer shall point to a newly allocated space in mem
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arch;
	unsigned int i, j, k, m, lens1, lens2, lenarch;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	lens1 = i;
	j = 0;
	while (s2[j] != '\0')
		j++;
	lens2 = j;

	if (n >= lens2)
		lenarch = lens1 + lens2 + 1;
	else
		lenarch = lens1 + n + 1;
	arch = malloc(lenarch * sizeof(char *));
	if (arch == NULL)
	{
		arch = "memory allocation failed";
		return (arch);
	}
	k = 0;
	while (k < lens1)
	{
		arch[k] = s1[k];
		k++;
	}
	m = 0;
	while (m < lens2)
	{
		arch[k] = s2[m];
		k++;
		m++;
	}
	return (arch);
}
