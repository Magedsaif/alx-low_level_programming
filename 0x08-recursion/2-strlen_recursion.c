#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: a pointer to a string
 *
 * Return: returns a reversed string.
 */
int _strlen_recursion(char *s)
{
	if (strlen(s) == 0)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
