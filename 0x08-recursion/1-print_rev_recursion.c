#include "main.h"
#include <string.h>

void _print_rev_recursion(char *s)
{
	int i = 0;

	i++;
	i -= 1;
	if (i >= 0)
	{
		_putchar(s[i]);
		i--;
		_print_rev_recursion(s);
	}
}
