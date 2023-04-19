#include <stdlib.h>
/**
 * int_index -  a function that searches for an integer.
 *
 * @array: array containing integars to be searches
 * @size: the size of the array
 * @cmp:a pointer to the function you need to use
 *
 * Return: the index of the first element
 * for which the cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 *
*/


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
		{
			return (-1);
		}

		for (i = 0; i < size; i++)/*iterator*/
		{
			if (cmp(array[i]))
				return (i);/*return the index of first match*/
		}

	}
	return (-1);/*If no element matches, return -1*/
}
