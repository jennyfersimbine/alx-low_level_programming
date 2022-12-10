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

	for (i = 48; i < 57; i++)
	{
		for (j = 48; j < 58; i++)
		{
			putchar(i)
			if (j != i)
			{
				putchar(j);
				if (j < 57)
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
