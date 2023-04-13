#include"main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - a function that concatenates two strings.
 * @s1:first string to be concatenated .
 * @s2:second string to be concatenated .
 * @n:Number of the first bytes of s2
 *
 * Return:point to a newly allocated space in memory which
 * contains the contents of s1,
 * followed by the first n bytes of s2, and null terminated
 * empty string if NULL is passed,
 * and NULL on failure
 *
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concatenated;
unsigned int i;
unsigned int len1 = 0;
unsigned int len2 = 0;
unsigned int total_length = 0;

if (s1 == NULL)
{
	s1 = "";
}
if (s2 == NULL)
{
	s2 = "";
}
while (s1[len1] != '\0') /*geting the length of s1 */
{
	len1++;
}
while (s2[len2] != '\0') /*comparing n to see if use the entire string s2*/
{
	len2++;
}
if (n >= len2) /*comparing n to see if use the entire string s2*/
{
	n = len2;
}
total_length = (len1 + len2 + 1);
concatenated = malloc(sizeof(char) * (total_length));
if (concatenated == NULL)
	return (NULL);

for (i = 0; i < total_length; i++)
	concatenated[i] = s1[i];

for (i = 0; i < n; i++)
	concatenated[i + len1] = s2[i];

concatenated[i + len1] = '\0';
return (concatenated);
}
