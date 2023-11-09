#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: total nr of args
 * Return: sum of all paramaters nrs
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list nrs;

	va_start(nrs, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(nrs, int);
	}
	va_end(nrs);
	return (sum);
}
