#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
 **Return: Always 0 (Success)
*/

int main(void)
{
	char alphabL;
	char alphabU;

	alphabL = 'a';
	while (alphabL <= 'z')
	{
		putchar(alphabL);
		alphabL = alphabL + 1;
	}
	alphabU = 'A';
	while (alphabU <= 'Z')
	{
		putchar(alphabU);
		alphabU = alphabU + 1;
	}
	putchar('\n');
	return (0);
}
