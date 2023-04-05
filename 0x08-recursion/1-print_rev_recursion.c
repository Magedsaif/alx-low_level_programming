#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - a function that prints a string in reverse.
 * @s: a pointer to a string
 *
 * Return: returns a reversed string.
 */
void _print_rev_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
