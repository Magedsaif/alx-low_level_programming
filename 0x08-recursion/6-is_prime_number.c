#include "main.h"
/**
 * find_prime - checks for aprime number
 * @n: a given number to check if its a prime number
 * @b: a number to test if i @n is a prime number
 * Return: return prime number @n
 *
*/

int find_prime(int n, int b)
{
	if (n <= 1 || n % b == 0) /*excludes non prime numbers*/
		return (0);
	else if (n == b) /*means it's a prime number*/
		return (1);
	else if (n > b) /*keeps adding to @b starting from 2 to get to prime num*/
		find_prime(n, b + 1);

	return (1);
}

/**
* is_prime_number -  a function that returns 1
* if the input integer is a prime number, otherwise return 0
* @n: a given number to check if its a prime number
* Return: 1 if the input integer is a prime number,
* otherwise return 0.
*/
int is_prime_number(int n)
{
	return (find_prime(n, 2));
}
