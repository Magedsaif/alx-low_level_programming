#include "main.h"
/**
 * find_prime - checks for aprime number
 * @n: a given number to check if its a prime number
 * @i: a number to test if @n is a prime number
 * Return: prime number @n
 *
*/

int find_prime(int n, int i)
{
	if (n <= 1 || n % i == 0) /*excludes non prime numbers*/
		return (0);
	else if (n == i) /*means it's a prime number*/
		return (1);
	else if (n > i) /*keeps adding to @i starting from 2 to get to prime num*/
		find_prime(n, i + 1);

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
