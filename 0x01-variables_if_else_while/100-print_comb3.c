#include <stdio.h>
#include <stdlib.h>

/**
 * main - print combination
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i < 9; i++)
	{
		for (j = 1; j < 10; i++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
				if (j < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
