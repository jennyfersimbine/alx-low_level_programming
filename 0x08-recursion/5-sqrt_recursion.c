#include "main.h"

/**
 * checkin - checks if is natural sqrt
 * @nr: the numer input
 * @posqrt: the possiblee sqrt
* Return: result or -1
*/

int checkin(int nr, int posqrt)
{
	if ((posqrt * posqrt) == nr)
	{
		return (posqrt);
	} else if ((posqrt * posqrt) > nr)
	{
		return (-1);
	}
	return (checkin(nr, posqrt + 1));
}

/**
 * _sqrt_recursion - print value of natural sqrt
 * @n: number given
 * Return: result or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (checkin(n, 0));
}
