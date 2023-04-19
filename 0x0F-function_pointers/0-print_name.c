#include"function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name.
 * @name: given name to be printed out
 * @f: a pointer to a function that returns a pointer to a char
 * Return: a name
 *
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
