#include<stdio.h>
/**
*main-printnumberz
*
* Return: always print 0
*/
int main(void)
{
int a;
for (a = 0; a < 10; a++)
{
putchar ('0' + a);
putchar (',');
putchar (' ');
}
return (0);
}
