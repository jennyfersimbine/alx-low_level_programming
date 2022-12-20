#include <stdio.h>

/**
 * swap_int - swap values of two pointers
 * @a: value 1
 * @b: value 2
 *
 * Return: none
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
