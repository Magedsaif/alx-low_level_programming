#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);
		for (i = 1; i <= n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != n && separator != NULL)
				printf("%s", separator);
		}
		va_end(args);
	}
	printf("\n");
}
