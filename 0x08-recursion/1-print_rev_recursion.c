#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print string in reverse with recursion
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{

	/**
	 *if (s[i] != '\0')
	 *{
	 *	i++;
	 *}

	 
	 *	i -= 1;
	 *	if (i >= 0)
	 *{
	 *	_putchar(s[i]);
	 *	i--;
	 *	_print_rev_recursion(s);
	 *}
	 */

	if (*s == '\n')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_print_rev_recursion(s+1);
}
