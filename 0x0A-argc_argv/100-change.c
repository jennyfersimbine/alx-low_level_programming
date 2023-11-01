#include "main.h"

/**
 * check_remain - check each remainin value
 * @nr: value remainin
 * Return: nr of coins
 */

int check_remain(int nr)
{
	int coins;

	if (nr >= 10)
	{
		coins = nr / 10;
		if ((nr % 10) == 0)
			return (coins);

		if ((nr % 10) >= 2)
		{
			coins = coins + ((nr % 10) / 2);
			return (coins);
		}
		if ((nr % 10) == 1)
		{
			coins = coins + ((nr % 10) / 1);
			return (coins);
		}
	}
	if (nr >= 5)
	{
		coins = nr / 5;
		if ((nr % 5) == 0)
			return (coins);

	if ((nr % 5) >= 2)
	{
		coins = coins + ((nr % 5) / 2);
		return (coins);
	}
	if ((nr % 5) == 1)
	{
		coins = coins + 1;
		return (coins);
	}
	}
	return (coins);
}
/**
 * main - program that adds positive numbers
 * @argc: nr of arguments
 * @argv: arguments array
 * Return: 0 if succes, 1 error
 */

int main(int argc, char *argv[])
{
	int cents, coins, remain;

	if (argc != 1)
	{
		printf("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents <= 0)
		printf("0\n");

	if (cents > 25)
	{
		coins = cents / 25;
		remain = cents % 25;
		coins += check_remain(remain);
	} else if (cents > 10)
	{
		coins = cents / 10;
		remain = cents % 10;
		coins += check_remain(remain);
	} else if (cents > 5)
	{
		coins = cents / 5;
		remain = cents % 5;
		coins += check_remain(remain);
	} else if (cents > 2)
	{
		coins = cents / 2;
		remain = cents % 2;
		coins += check_remain(remain);
	} else if (cents == 1)
	{
		coins = 1;
	}
	return (coins);
}
