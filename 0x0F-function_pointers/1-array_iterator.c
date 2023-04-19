#include <stddef.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: array containing integars to be printed
 * @size: the size of the array
 * @action:a pointer to the function you need to use
 *
 * Return: nothing
 *
*/


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;/*to match the type of size_t */

	if (array != NULL && action != NULL)/*checking if any pointer is NULL*/
		for (i = 0; i <= size; i++)/*iterator*/
		{
			action(array[i]);/*listing numbers from array*/
		}
}
