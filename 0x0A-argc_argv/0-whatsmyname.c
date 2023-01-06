#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - print name of program
 * @argc: arguments nr
 * @argv: array of arguments
 * Return: 0;
 */

int main(__attribute__((unused)) int argc, char* argv[])
{
	printf("name of program = %s", argv[0]);
	_putchar('\n');
	return (0);
}
