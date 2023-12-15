#include "main.h"
#include <string.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to represent
 */

#include "main.h"

int remain(int nr)
{
	int binDiv = 2;
	while (nr >= binDiv)
		nr -= binDiv;
	return (nr);
}

void print_binary(unsigned long int n)
{
char *bstr = "";

while (n > 0)
{
remainder = remain(n);
/*register each bit or concatenate in string*/
bstr = strcat(bstr, remainder);
n = n >> 1;
}
printf("%s", bstr);
}
