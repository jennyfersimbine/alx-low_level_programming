#include "main.h"
#include <stringio.h>

/**
 * rrev_string - reverse string
 *@S: reverse parameter
 */

void rev_string( char *s);
{
	char temp;
	int i, lengt, length;
	
	lengt = 0;
	lengthb = 0;
	while (s[length] != '\0')
	for (i = 0; i < strlen(s) / 2; i++)
	{
		temp = s[i];
		s[i] = s[lengt];
		s[lengt--] = temp;
	}
}
