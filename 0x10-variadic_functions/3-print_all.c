#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints given parameter
 * @format: list of arguments
 */

void print_all(const char * const format, ...)
{
	va_list pr;
	const char *ptrf;

	ptrf = format;
	if (format == NULL)
		return;
	va_start(pr, format);
	while (*ptrf != '\0')
	{
		switch (*ptrf)
		{
			case 'c':
				printf("%c, ", va_arg(pr, int));
				break;
			case 'i':
				printf("%d, ", va_arg(pr, int));
				break;
			case 'f':
				printf("%f, ", va_arg(pr, double));
				break;
			case 's':
				printf("%s", va_arg(pr, char *));
				break;
			default:
				break;
		}
		ptrf++;
	}
	printf("\n");
	va_end(pr);
}
