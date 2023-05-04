#include"main.h"
#include<string.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b:pointer to a string of 0 and 1 chars
 *
 * Return:the converted number.
 * or 0 if there is one or more chars in the string b that is not 0 or 1
 * or 0 if b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	num = 0;

	for (i = 0; i < len; i++)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);

		num = num + ((b[i] - '0') * (_pow(2, (len - i - 1))));
	}
	return (num);
}

/**
 * _pow - calculate power
 * @base: base
 * @pow: power
 * Return: result
 */
unsigned int _pow(int base, int pow)
{
	unsigned int result;

	if (pow == 0)
		return (1);

	if (pow == 1)
		return (base);
	result = base;
	while (--pow)
		result *= base;
	return (result);
}
