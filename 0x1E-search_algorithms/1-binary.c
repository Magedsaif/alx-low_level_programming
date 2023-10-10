#include"search_algos.h"
/**
 * binary_search - a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 *
 * @array: array is a pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: the value to search for
 *
 * You can assume that array will be sorted in ascending order
 * You can assume that value won’t appear more than once in array
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, left, right;

	if (!array)
		return (-1);

	middle = 0;
	left = 0;
	right = (size - 1);
	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}


/**
 * print_array-  Construct a new print array object
 *
 * @array: array is a pointer to the first element of the array to search in
 * @left: element at the left of the selected array
 * @right: element at the right of the selected array
 *
 * Return: Nothing
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}
