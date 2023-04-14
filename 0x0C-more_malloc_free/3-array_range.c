#include"main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *array_range - a function that creates an array of integers.
 * The array created should contain
 * all the values from min (included) to max (included)
 * ordered from min to max
 *
 * @min: lower limit for values to be ordered
 * @max: higher limit for values to be ordered
 *
 * Return:the pointer to the newly created array
 * NULL If nmemb or size is 0
 * NULL If malloc fails
 * If min > max, return NULL
 *
*/
int *array_range(int min, int max)
{
int *array_integers;
unsigned int size = (max - min + 1); /*getting the size of the array given*/
int i; /*counter to loop over array elements between te range of min & max*/
int j = 0; /*array element*/

if (min > max)
	return (NULL);

/*allocating a memory that accepts an array of integars with the given size*/
array_integers = malloc(sizeof(int) * size);
if (array_integers == NULL)
	return (NULL);

for (i = min; i <= max; i++)/*looping over the array of integars*/
{
	array_integers[j] = i;/*printing the integars in the array using a j elment*/
	j++;
}
return (array_integers);
}
