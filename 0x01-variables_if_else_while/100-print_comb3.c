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
				if (i < 8 && j < 9)
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
