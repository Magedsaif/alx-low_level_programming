#include "main.h"
/**
 * _strncpy - function copies the string pointed to by src
 *
 * @dest: destination of copy
 * @src: source array to copy
 * @n: number of bytes from src
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);

}
