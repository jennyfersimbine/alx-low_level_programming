#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabL;

	alphabL = 'a';
	while (alphabL <= 'z')
	{
		if (alphabL == 'e' || 'q')
		{
			/*nothing happens*/
		} else
		{
			putchar(alphabL);
			alphabL = alphabL + 1;
		}
	}
	putchar('\n');
	return (0);
}
