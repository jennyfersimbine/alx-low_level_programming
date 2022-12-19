#include "main.h"

/**
 * reset_to_98 -  takes a pointer to an int as parameter and update value to 98
 * @n: parameter to function
 * Return: 0
 */

void reset_to_98(int *n)
{
	int c;
	
	c = *n;
	_putchar(c);
	*n = 98;

	_putchar(c);
}
