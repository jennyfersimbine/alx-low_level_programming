#include "main.h"

/**
 * _strstr - etc
 * @haystack: parent
 * @needle: substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *p;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[j] != '\0' && haystack[j] != needle[i])
		{
			if (needle[j] == haystack[j])
			{
				p = &haystack[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
