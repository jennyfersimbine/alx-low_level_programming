#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value
 * @y: power value
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	int n;

	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		n = 1;
		return (n);
	}
	n = x * _pow_recursion(x, y - 1);
	return (n);
}
