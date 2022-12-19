#include "main.h"
#include "_putchar.c"

/**
 * rest_to_98 -  function that takes a pointer to an int as parameter and updates the value it points to to 98
 * @*n : parameter
 * Return: 0
 */

void reset_to_98(int *n)
{
	*n = 98;
	_putchar(*n);

	return (*n);
}
