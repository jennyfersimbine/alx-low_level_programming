#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int slen, i, res;
	int x;

	slen = 0;
	while (b[slen] != '\0')
	{
		if (b[slen] != 0 || b[slen] != 1)
			return (0);
		if (b == NULL)
			return (0);
		slen++;
	}

	res = 0;
	for (x = slen; x > -1; x--)
	{
		for (i = 0; i < (slen + 1); i++)
		{
			res += (pow(b[i],x)) * b[i];
		}
	}
	return (res);
}
