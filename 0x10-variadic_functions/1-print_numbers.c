#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: nr of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argum;

	va_start(argum, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argum, int));
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(argum);
}
