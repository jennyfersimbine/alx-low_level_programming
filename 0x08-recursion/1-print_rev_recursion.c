#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - print string in reverse with recursion
 * @s: string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);//will repeat until str ends
		_putchar(*s);
	}
}
