#include "main.h"
/**
 * find_square - finds the square root of two numbers
 * @n: a number to get the square root of.
 * @b: a number to test if i could get the square root of @n
 * Return: square root of @n
 *
*/

int find_square(int n, int b)
{
	if (b * b > n) /*means it doesn't have a square root*/
		return (-1);
	else if (b * b == n) /*means it have a square root*/
		return (b);
	else /*the recursive function*/
		return (find_square(n, b + 1));
	return (1);
}

/**
* _sqrt_recursion -  a function that returns the natural
* square root of a number.
* @n: a given number to get the natural
* square root of it.
* Return: the natural square root of a number.
*/
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (find_square(n, 1));
}
