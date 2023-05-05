#include "main.h"
/**
 * clear_bit -  a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to unsigned long int
 * @index: index desired
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var;

	var = 0;
	if (index > 63)
		return (-1);
	var = *n & ~(1 << index);
	*n = var;
	return (1);
}
