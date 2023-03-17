#include<stdio.h>
/**
*main-printnumberz
*
* Return: always print 0
*/
int main(void)
{
char ch;
for (ch = 'a' - 97; ch < 'k' - 97; ch++)
{
putchar ("%d", ch);
}
return (0);
}
