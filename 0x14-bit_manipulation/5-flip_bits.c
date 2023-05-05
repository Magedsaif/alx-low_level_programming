#include <stdio.h>
#include "main.h"

/**
 * flip_bits - a function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: number 1
 * @m: number 2
 * Return: the number of bits I need to change
 * You are not allowed to use the % or / operators
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int number, i;

	number = 0;
	for (i = 0; i < 64; i++)
	{

		if (((n >> i) & 1) != ((m >> i) & 1))
		{
			number++;
		}
	}
	return (number);
}
