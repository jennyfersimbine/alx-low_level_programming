#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: nr of args
 * @argv: arguments
 * Return: 0 if success, 1 is error
 */

int main(int argc, char **argv)
{
	int a, b, res;

	if (argc == 3)
	{
	a = (int) atoi(argv[1]);
	b = (int) atoi(argv[2]);
	res = a * b;
	printf("%d\n", res);
	return (0);
	}
	printf("Error\n");
	return (1);
}
