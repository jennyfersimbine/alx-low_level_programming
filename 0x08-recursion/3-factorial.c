#include "main.h"

/**
 * factorial - function returns factorial of given number
 * @n: number given
 * Return: result of factorial or 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
