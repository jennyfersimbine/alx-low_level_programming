#include "main.h"

/**
 * main - prints the program name
 * @argc: nr of arguments
 * @argv: array of arguments
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
