#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string
 * @accept: chars to matcch in s
 * Return: length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, lens;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
		{
			j++;
		}
		i++;
	}
	lens = j + 1;
	return (lens);
}
