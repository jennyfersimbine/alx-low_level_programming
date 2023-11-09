#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: nr of strings passed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list argum;

	va_start(argum, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(argum, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argum);
}
