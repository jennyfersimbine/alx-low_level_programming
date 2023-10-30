#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @c: the character to be checked
 *
 * Return: 1 if is lowercase, else 0
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	return (0);
}
