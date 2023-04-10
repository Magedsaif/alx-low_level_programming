#include<stdio.h>
#include<stdlib.h>
/**
 * main - a function that takes arguments after the program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on passing 2 arguments, 1 if less than two
*/
int main(int argc, char *argv[])
{
if (argc == 3)
{
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
else
	{
		printf("error\n");
	return (1);
	}
}
