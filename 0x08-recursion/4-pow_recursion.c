#include "main.h"
/**
 * _pow_recursion -  a function that returns the value 
 * of x raised to the power of y.
 * @x: a given number to get it with the power of @y
 * @y: a given number to be the power to @x
 * Return: the factorial of a given number.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
