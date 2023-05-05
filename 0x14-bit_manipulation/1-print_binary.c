#include"main.h"
/**
 * print_binary - Write a function that prints
 * the binary representation of a number
 *
 * @n: agiven number to get the binary representation of.
 *
 * Return:void
 *
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar('0' + (n & 1));
}
