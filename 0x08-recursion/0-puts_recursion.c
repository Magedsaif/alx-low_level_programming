#include "main.h"
#include <string.h>
/**
 * _puts_recursion - a function that prints a string,
 *  followed by a new line.
 * @s: a pointer to a string
 *
 * Return: returns a string followed by a new line
 */
void _puts_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
