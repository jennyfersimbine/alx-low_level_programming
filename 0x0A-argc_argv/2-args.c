#include "main.h"

/**
 * main - prints all arguments it receives with new line each
 * @argc: nr of args
 * @argv: args
 * Return: 0 if success
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
