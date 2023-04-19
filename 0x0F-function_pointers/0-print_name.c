#include"function_pointers.h"
#include <stdlib.h>
/**
 * print_name - a function that prints a name.
 * @name:
 * @f:
 * Return: a name
 * 
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
