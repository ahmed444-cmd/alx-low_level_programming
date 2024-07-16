#include "search_algos.h"

/**
  * binary_search - Locates an int in array of ints using the base2 srch algo.
  * @array: Pointer to the initial element of the array to be searched.
  * @size: Total number of elements in the array.
  * @value: The target value to find.
  *
  * Return: -1 if the value is not found or if the array is NULL.
  *         Otherwise, returns the index of the found value.
  *
  * Description: Outputs curr [sub]array being searched after update.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
