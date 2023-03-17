#include<stdio.h>
/**
*main-print alphabet
*
*Return: always return 0
*/
int main(void)
{
int a;
char ch;
for (a = 0; a < 10; a++)
{
putchar('0' + a);
for (ch = 'a'; ch >= 'f'; ch++)
{
putchar (ch);
}
}
putchar ('\n');
return (0);
}
