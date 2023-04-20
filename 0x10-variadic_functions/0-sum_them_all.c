#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: integers to be added
 * Return: sum of all integars added
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i;

	if (n == 0)
		return (0);

	va_start(args, n);


	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);

	va_end(args);
	return (sum);
}
