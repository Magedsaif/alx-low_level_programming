#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function to get corresponding operation to a given operator
 * @s: pointer to an operator
 * Return: corresponding operation to that operator
 *
*/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int i;

i = 0;
/*If s doesn't match the 5 expected operators(+, -, *, /, %),return NULL*/
while (ops[i].op != NULL)
{
	if (strcmp(ops[i].op, s) == 0)/*if s matches any operator*/
	{
		return (ops[i].f);/*return corresponding operation to that operator*/
	}
	i++; /*increment to go through each operator*/
}
return (NULL);
}
