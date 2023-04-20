#include<stdio.h>
#include<stdlib.h>
#include "3-calc.h"
/**
 * main - a function that takes arguments after the program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on getting the desired result
*/

int main(int argc, char *argv[])
{
int a, b, result;
int (*pointer)(int, int);

if (argc != 4)
{
	printf("Error\n");
	exit(98);
}


pointer = get_op_func(argv[2]);

if (pointer == NULL)
{
	printf("Error\n");
	exit(99);
}

a = atoi(argv[1]);
b = atoi(argv[3]);

result = (*pointer)(a, b);

printf("%d\n", result);
return (0);
}
