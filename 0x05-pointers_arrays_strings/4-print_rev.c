#include"main.h"
#include"2-strlen.c"
/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: character to be printed
*Return: returns a string reversed followed by a new line
*/
void print_rev(char *s)
{
int i;

for (i = _strlen(s) - 1; i >= 0; i--)
{
_putchar(*(s + i));
}
_putchar('\n');
}
