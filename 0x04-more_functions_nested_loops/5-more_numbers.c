#include "main.h"

/**
*more_numbers- prints 10 times the numbers, from 0 to 14
*Return: no return
**/

void void more_numbers(void)
{
	int i;
	int j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
				if (j >= 10)
				{
					_putchar((j / 10) + '0');
				}
					_putchar((i % 10) + '0');
		}
		
		_putchar('\n');
	}
}
