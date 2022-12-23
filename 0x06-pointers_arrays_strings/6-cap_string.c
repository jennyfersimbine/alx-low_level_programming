#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - capitalize all words
 * @s: string with words
 * Return: string modified
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
				continue;
			}
		}
		if (s[i - 1] == ' ' ||
			s[i - 1] == '\t' ||
			s[i - i] == '\n' ||
		    s[i - 1] == ',' ||
			s[i - 1] == '.' ||
			s[i - 1] == '!' ||
			s[i - 1] == '?' ||
			s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}')
 		{
			++i;
			if (s[i] >= 97 && s[i] <= 122)
			{
				s[i] -= 32;
				continue;
			}
		}
		
	}
	return (s);
}
