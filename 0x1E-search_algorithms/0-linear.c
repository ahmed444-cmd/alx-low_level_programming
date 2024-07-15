#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of the first occurrence of value in array, or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	/* Checks if the input array pointer is NULL */
	if (array == NULL)
		return (-1);

	/* Iterates on the array */
	for (i = 0; i < size; i++)
	{
		/* Displays the comparison in progress */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* Returns the index if the value is found */
		if (array[i] == value)
			return (i);
	}
	/* Indicates that the value was not found in the array */
	return (-1);
}
