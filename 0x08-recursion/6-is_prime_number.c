#include "main.h"

/**
 * checkin - checkin and return 0f or 1t
 * @nr: number entred
 * @i: possiblee nr
 * Return: 0 if false, 1 if true is pprime
 */

int checkin(int nr, int i)
{
	if (i < nr)
	{
		if (nr % i == 0)
		{
			return (0);
		}
		return (checkin(nr, i + 1));
	}
	return (1);
}

/**
 * is_prime_number - function to check if is prime number entered
 * @n: number entered
 * Return: 0 if not, 1 if true
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checkin(n, 2));
}
