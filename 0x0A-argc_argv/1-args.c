#include "main.h"

/**
 * main - print nr of arguments
 * @argc: nr of args
 * @argv: arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	if (argv != NULL)
		/*-1 is not to count program name (argc[0]) as argument*/
		printf("%d\n", argc - 1);
	return (0);
}
