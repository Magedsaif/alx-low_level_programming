#include "main.h"

/**
*print_line- prints a straight line
*@n:number of times the character _ should be printed 
*Return: always 0
**/

void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = n; i <=n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
