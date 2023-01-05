#include "main.h"

/**
 * _puts_recursion - print string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\n' && *s == '\0')
	{
		_putchar('\n');
		return;
	} else
	{
		_putchar(*s);
		_puts_recursion(s);
	}
	/**
	 *else
	 *{
	 *	_putchar('\n');
	 *}
	 */
}
