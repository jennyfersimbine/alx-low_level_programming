#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isalpha - check if a character is part of alphabet
 * @c: the character to check
 *
 * Return: 1 if result is alhpabet char, else 0
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	return (0);
}
