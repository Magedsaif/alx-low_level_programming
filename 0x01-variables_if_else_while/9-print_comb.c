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
if (a != 9)
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
