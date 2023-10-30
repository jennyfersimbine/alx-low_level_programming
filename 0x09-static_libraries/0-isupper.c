#include <ctype.h>
#include "main.h"

/**
 * _isupper - check for uppercase letter
 * @c: chararacter to be checked
 * Return: 1 if uppercase else 0
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	return (0);
}
