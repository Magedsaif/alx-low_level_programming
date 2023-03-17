#include<stdio.h>
/**
*main-print letters except q and e
*
*Return:always return 0
**/
int main(void)
{
char ch
while (ch != 'q' || ch != 'e')
{
for (ch = 'a'; ch <= 'z'; ch++)
putchar (ch);
}
putchar ('\n');
return (0);
}
