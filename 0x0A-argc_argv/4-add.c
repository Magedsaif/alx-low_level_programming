#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - a function that takes arguments after the program name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if no number passed, 1 if there are symbols in input
*/
int main(int argc, char *argv[])
{
int i, j;
int sum = 0;

for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++) /* a loop for the entire array*/
		{
			if (!(isdigit(argv[i][j]))) /*check if any symbols is inputed */
				{
					printf("Error\n");
					return (1);
				}
			else
				{
					sum += atoi(argv[i]); /*adding to sum in every loop*/
				}
		}
}
printf("%d\n", sum);
return (0);
}
