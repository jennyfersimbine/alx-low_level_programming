#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * Return: new string with concatenated strs
 */

char *str_concat(char *s1, char *s2)
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
	{
		j++;
	}
	lens2 = j;
	lenarch = lens1 + lens2 + 1;

	arch = malloc(sizeof(char) * lenarch);
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
