#include "main.h"
/**
 * @s: This is the C string to be scanned.
 * @c: first occurrence of the character to be searched in s.
 * Return: NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] != '\0'; a++)
{
	if (s[a] == c)
	{
		return (s + a);
	}
}
if (s[a] == c)
	return (s + a);
return (0);
}
