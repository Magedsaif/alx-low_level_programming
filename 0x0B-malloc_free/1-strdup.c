#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be copied.
 *
 * Return: NULL if str = NULL,
 * and NULL also if insufficient memory was available
 * and on success it returns a pointer to the duplicated string.
 *
*/
char *_strdup(char *str)
{
char *new_string;
unsigned int size = sizeof(str);
unsigned int i;

new_string = malloc(size * sizeof(char));

for (i = 0; i < size; i++)
{
	new_string[i] = str[i];
}
return (new_string);
free(new_string);

if (str == NULL || new_string == NULL)
{
	return (NULL);
}
}
