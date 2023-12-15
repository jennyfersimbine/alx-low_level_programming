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
