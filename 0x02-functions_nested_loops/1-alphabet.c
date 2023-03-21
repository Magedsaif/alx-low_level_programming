#include "main.h"
#include<stdio.h>
/**
*
* main-print alphabet
* Return: always return 0 uppon success
**/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar (ch);
}
_putchar ('\n');
}
