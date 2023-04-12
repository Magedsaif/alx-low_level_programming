#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - a function that returns
 * a pointer to a 2 dimensional array of integers.
 *
 * @width: width of array .
 * @height: height of array
 *
 * Return:  a pointer to a 2 dimensional array of integers.
 * NULL if NULL or 0 is passed to any parameter and NULL on failure
 *
*/
int **alloc_grid(int width, int height)
{
int **array;
int i;
int j;

if (width <= 0 || height <= 0)
{
	return (NULL);
}

array = (int **)malloc(height * sizeof(int *));

if (array == NULL)
{
	return (NULL);
}

for (i = 0; i < height; i++)
{
	array[i] = (int *)malloc(width * sizeof(int));

if (array[i] == NULL)
{
	return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
	array[i][j] = 0;
}
}
return (array);
}
