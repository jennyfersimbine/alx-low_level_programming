#include "main.h"

/**
 * is_prime_number - eturns 1 if the input integer is a prime number
 * @n: nr
 * Return; 1 if positive
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	} else if (n % 2 == 0)
	{
		return (0);
	}
	return (1);
}
