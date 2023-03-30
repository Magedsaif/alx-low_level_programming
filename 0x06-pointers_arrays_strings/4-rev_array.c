#include"main.h"
/**
*reverse_array - a function that reverses the content of an array of integers.
*@a: an array of integers
*@n: the number of elements to swap
*Return: returns an array of integars reversed
*/
void reverse_array(int *a, int n)
{
int i;

for (i = n - 1; i >= 0; i--)
{
_putchar(*(a + i));
}
}
