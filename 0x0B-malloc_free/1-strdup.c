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
unsigned int i;
unsigned int len = 0;

if (str == NULL)
{
	return (NULL);
}

while (str[len] != '\0') /*geting the length of str */
{
	len++;
}

new_string = malloc(sizeof(char) * len + 1); /*allocating memory just nedded*/

if (new_string == NULL)
{
	return (NULL);
}

for (i = 0; i < len; i++) /*the copying part to a new string*/
{
	new_string[i] = str[i];
}
return (new_string);
}
