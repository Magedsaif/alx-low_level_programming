#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously created
 * by your alloc_grid function.
 *
 * @grid: pointer to 2 dimensional array.
 * @height: height of array.
 *
 * Return:no return
 *
*/
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
	free(grid);
}
for (i = 0; i < height; i++)
{
	free(grid[i]);
}
free(grid);
}
