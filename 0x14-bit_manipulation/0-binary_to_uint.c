#include "main.h"

/**
 * _pow - returns the value of x raised to the power of y
 * @x: value
 * @y: power value
 * Return: result
 */

int _pow(int x, int y)
{
	int n;

	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		n = 1;
		return (n);
	}
	n = x * _pow(x, y - 1);
	return (n);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b:  is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int slen, res;
	int x;

	if (b == NULL)
		return (0);

	slen = 0;
	while (b[slen] != '\0')
	{
		if (b[slen] != '0' && b[slen] != '1')
			return (0);
		slen++;
	}

	res = 0;
	for (x = slen - 1; x > -1; x--)
	{
		res += (_pow(2, slen - 1 - x)) * (b[x] - '0');
	}
	return (res);
}
