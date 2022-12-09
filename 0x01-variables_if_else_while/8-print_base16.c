#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always return 0 (Success)
*/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	i = 'a';
	while (i < 'g')
	{
		putchar(i);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
