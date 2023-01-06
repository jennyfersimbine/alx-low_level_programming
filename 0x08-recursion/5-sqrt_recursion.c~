#include "main.h"

int checkin(int nr, int posqrt)
{
	if ((posqrt * posqrt) == nr)
	{
		return (posqrt);
	} else if((posqrt * posqrt) > nr)
	{
		return (-1);
	}
	return (checkin(nr, posqrt + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (checkin(n, 0));
}
