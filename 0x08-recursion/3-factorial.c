#include "main.h"

/**
 * factorial - returns factorial of a number
 * @n: given number
 * Return: factorial result
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		n = 1;
		return (n);
	}
	n = n * factorial(n - 1);
	return (n);
}
