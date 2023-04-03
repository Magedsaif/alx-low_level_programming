#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring.
 *
 * @s: This is the string to be scanned.
 *
 * @accept:  accepted bytes to be compared.
 *
 * Return: the number of bytes in the initial segment of @s which consist only
 * of bytes from @accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
unsigned int count = 0;

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
			count++;
	}
}
	return (count);
}
