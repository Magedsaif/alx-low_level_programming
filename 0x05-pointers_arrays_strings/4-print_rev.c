#include"main.h"
/**
*print_rev - prints a string, in reverse, followed by a new line.
*@s: character to be printed
*Return: returns a string reversed followed by a new line
*/
void print_rev(char *s)
{
int index;
for (index = 0; str[index] != '\0'; index++)
{
_putchar(str[index]);
}
_putchar('\n');
}
