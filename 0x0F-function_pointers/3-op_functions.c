#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add
 * @a: given integar
 * @b: given integar
 * Return: result of adding
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract
 * @a: given integar
 * @b: given integar
 * Return: result of sub.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply
 * @a: given integar
 * @b: given integar
 * Return: result of mult.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide
 * @a: given integar
 * @b: given integar
 * Return: result of divide
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus for remainder
 * @a: given integar
 * @b: given integar
 * Return: result of reminder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
