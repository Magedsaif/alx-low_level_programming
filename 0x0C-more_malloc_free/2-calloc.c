#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_calloc - a function that allocates memory for an array, using malloc.
 * @nmemb: no. of array elements
 * @size:no. of bytes for each array element
 *
 * Return:returns a pointer to the allocated memory.
 * NULL If nmemb or size is 0, then
 *NULL If malloc fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *str;
unsigned int i;

str = malloc(size * sizeof(char));
if (size == 0 || str == NULL || nmemb == 0)
{
	return (NULL);
}
for (i = 0; i < nmemb; i++)
{
	str[i] = 0;
}
return (str);
}
