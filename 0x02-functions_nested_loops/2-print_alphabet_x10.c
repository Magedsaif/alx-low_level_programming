#include<stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - print alphabet 
*Return: always return 0 uppon success
**/
void print_alphabet_x10(void)
{
int i;
char ch;
while (i<=10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);
}
i++;
_putchar ('\n');
}
}
