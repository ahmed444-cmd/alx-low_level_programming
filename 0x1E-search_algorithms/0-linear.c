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

	/* Check if the input array is NULL */
	if (array == NULL)
		return (-1);

	/* iterate through the array */
	for (i = 0; i < size; i++)
	{
		/* print the comparison being made */
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		/* if value is found return the index */
		if (array[i] == value)
			return (i);
	}
	/* Value not found in the array */
	return (-1);
}
