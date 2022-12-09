#include <stdio.h>
#include <stdlib.h>

/**
 * main_Entry point
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
			return (0);
		} else
		{
			putchar(alphabL);
			alphabL = alphabL + 1;
		}
	}
	return (0);
}
