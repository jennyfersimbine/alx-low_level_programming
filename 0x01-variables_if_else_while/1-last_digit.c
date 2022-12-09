#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);
	nr = n % 10;

	if (nr > 5)
	{
		printf("%d and is greater than 5\n", nr);
	} else if (nr == 0)
	{
		printf("%d and is 0\n", nr);
	} else
	{
		printf("%d and is less than 6 and not 0\n", nr);
	}
	return (0);
}
