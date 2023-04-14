#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr:  a pointer to the memory previously allocated with a call to
 * malloc: malloc(old_size)
 *
 * @old_size: the size, in bytes, of the allocated space for ptr
 *
 * @new_size: the size, in bytes, of the newly allocated space for ptr
 *
 * Return: new array if success
 *
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

unsigned int i;
char *new_array;
char *old_array = ptr;

ptr = malloc(old_size);


if (old_size == new_size)
{
	return (ptr);
}

if (ptr == NULL)
{
	new_array = malloc(new_size);
	return (new_array);
}

if (ptr != NULL && new_size == 0)
{
	free(ptr);
	return (NULL);
}

new_array = malloc(new_size);
if (new_array == NULL)
{
	return (NULL);
}

for (i = 0; i < old_size; i++)
{
	new_array[i] = old_array[i];
}

free(ptr);
return (new_array);
}
