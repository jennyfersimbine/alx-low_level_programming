#include "main.h"
#include <ctype.h>

/**
 * check_digit - check if argument is digit
 * @str: argument passed to check
 * Return: 1 if error, 0 if success
 */

int check_digit(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (1);
		str++;
	}
	return (0);
}

/**
 * main - program that adds positive numbers
 * @argc: nr of arguments
 * @argv: arguments array
 * Return: 0 if succes, 1 error
 */

int main(int argc, char *argv[])
{
	int res, i, check;

	res = 0;
	if (argc < 2)
	{
		printf("%d\n", 0);
	} else
	{
		for (i = 1; i < argc; i++)
		{
			check = check_digit(argv[i]);
			if (check == 1)
			{
				printf("Error\n");
				return (1);
			}
			res += (int) atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
