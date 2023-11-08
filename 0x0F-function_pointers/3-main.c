#include "3-calc.h"

int main(void)
{
	int a, b;
	a = 6;
	b = 2;
 
	(*get_op_func(+))(a, b);
	return (0);
}
