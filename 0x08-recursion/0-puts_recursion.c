#include "main.h"

/**
 * _puts_recursion - print string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	char str = *s;

	_putchar(str);
	str ++;
	if (str > 0)
	{
		_puts_recursion(s);
	}
	_putchar('\n');
}
