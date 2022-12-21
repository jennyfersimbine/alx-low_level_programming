#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print each char of string
 * @str: parameter string
 */

void puts2(char *str)
{
	int i, lengt;

	lengt = strlen(str);
	for (i = 0; i < lengt; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
