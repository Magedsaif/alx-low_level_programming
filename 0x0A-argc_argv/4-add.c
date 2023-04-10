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
int a, num;
int summation = 0;

for (a = 1; a < argc; a++)
{
	for (num = 0; argv[a][num] != '\0'; num++) /* a loop for the entire array*/
		{
			if (!(isdigit(argv[a][num]))) /*check if any symbols is inputed */
				{
					printf("Error\n");
						return (1);
				}		
		}
		summation = summation + atoi(argv[a]); /*adding to summation in every loop*/
}
printf("%d\n", summation);
return (0);
}
