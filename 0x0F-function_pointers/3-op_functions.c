#include "3-calc.h"

int op_add(int a, int b)
{
int res;

res = a + b;
return (res);
}

int op_sub(int a, int b)
{
int res;

res = a - b;
return (res);
}

int op_mul(int a, int b)
{
int res;

res = a * b;
return (res);
}

int op_div(int a, int b)
{
int res;

if (a == 0 || b == 0)
{
printf("Error");
exit(100);
}
res = a / b;
return (res);
}

int op_mod(int a, int b)
{
int res;

if (a == 0 || b == 0)
{
_putchar("Error");
exit(100);
}
res = a % b;
return (res);
}
