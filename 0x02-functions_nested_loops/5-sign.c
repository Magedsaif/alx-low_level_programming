#include "main.h" 
#include <stdio.h> 
/**
*
*
**/
int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}
if (n < '0')
{
_putchar ('-1');
return (-1);
}
else
{
_putchar ('0');
return (0);
}
_putchar('\n');
}
