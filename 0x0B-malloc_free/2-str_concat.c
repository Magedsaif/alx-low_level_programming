#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - a function that concatenates two strings.
 *
 * @s1: first string to be concatenated .
 * @s2: second string to be concatenated .
 *
 * Return: point to a newly allocated space in memory which
 * contains the contents of s1,
 * followed by the contents of s2, and null terminated
 *
 * NULL if NULL is passed,
 * and NULL on failure
 *
*/
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int i;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int total_length = 0;

if (s1 == NULL || s2 == NULL)
{
	return (NULL);
}

while (s1[len1] != '\0') /*geting the length of s1 */
{
	len1++;
}

while (s2[len2] != '\0') /*geting the length of s2 */
{
	len2++;
}

total_length = (len1 + len2 + 1);
concatenated = malloc(sizeof(char) * (total_length));

if (concatenated == NULL)
{
	return (NULL);
}

for (i = 0; i < total_length; i++)
{
	concatenated[i] = s1[i];
}
for (i = 0; i < total_length; i++)
{
	concatenated[i + len1] = s2[i];
}
return (concatenated);
}
