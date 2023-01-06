#include "main.h"

/**
 * _pow_recursion - function returns value x raised to the power of y
 * @x:base
 * @y: pow
 * Return: rsult of calc or -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (-1);
	} else if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
