#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if is digit 0 to 9
 * @c: checks for a digit here
 *
 * Return: 1 if is digit otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	return (0);
}
