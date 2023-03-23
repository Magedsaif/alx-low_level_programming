#include "main.h"

/**
*print_most_numbers- prints the numbers exept 4 and 2
*Return: no return
**/

void print_most_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
if (i != '2' && i != '4')
{
_putchar(i);
}
}
_putchar('\n');
}
