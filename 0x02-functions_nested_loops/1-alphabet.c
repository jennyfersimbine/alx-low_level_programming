qqqqq#include "main.h"

/**
 *main -output fucntion
 *
 *function print_alphabet - print abc
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i = 97;
	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return;
}
int main(void)
{
	print_alphabet(void);
	return (0);
}
