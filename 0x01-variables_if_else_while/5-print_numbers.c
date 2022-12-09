#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
		a = a + 1;
	}
	return (0);
}
