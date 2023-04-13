#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: a value it will accept to assign different amount of memory
 * Return: a pointer to the allocated memory, in case of fails
 * the malloc_checked function should cause normal process
 * termination with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
void *pointer; /*void because i don't know the type the pointer will point at*/

pointer = malloc(b); /*apointer to allocated memory*/

if (pointer == NULL) /*check in case of failure*/
{
	exit(98);
}
return (pointer);/*normal process termination with a status value of 98*/
}
