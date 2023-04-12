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

if (width <= 0 || height <= 0) /*If width or height is 0 or (-),return NULL*/
{
	return (NULL);
}
/*array point to block of pointers,one for each row*/
array = (int **)malloc(height * sizeof(int *));

if (array == NULL)
{
	return (NULL);
}
/*fill in pointers(all rows of them) with a pointer*/
/*(also obtained from malloc) to columns number of ints*/
for (i = 0; i < height; i++)
{
	array[i] = (int *)malloc(width * sizeof(int));

if (array[i] == NULL) /*to free the memory in case of null output*/
{
for (j = 0; j < i; j++)
{
	free(array[j]);
}
free(array);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
	array[i][j] = 0; /*Each element of the grid should be initialized to 0*/
}
}
return (array);
}
