#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: no. of array elements
 * @size:no. of bytes for each array element
 *
 * Return:returns a pointer to the allocated memory.
 * NULL If nmemb or size is 0
 * NULL If malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;
unsigned int a;

if (size == 0 || nmemb == 0)
{
	return (NULL);
}

/*allocating memory by multiplying size by no. of elements*/
str = malloc(size * nmemb);
if (str == NULL)
{
	return (NULL);
}
for (a = 0; a < nmemb * size; a++) /*The memory is set to zero*/
{
	str[a] = 0;
}
return (str);
}
