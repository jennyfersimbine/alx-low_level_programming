#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alphab;

	alphab = 'z';
	while (alphab >= 'a')
	{
		putchar(alphab);
		alphab = alphab - 1;
	}
	putchar('\n');
	return (0);
}
