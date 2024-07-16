#!/usr/bin/python3
"""
This script takes a letter as input and sends a POST request 
to http://0.0.0.0:5000/search_user, including the letter as a parameter.
"""
import sys
import requests


if __name__ == "__main__":
    letter = "" if len(sys.argv) == 1 else sys.argv[1]
    payload = {"q": letter}

    r = requests.post("http://0.0.0.0:5000/search_user", data=payload)
    try:
        response = r.json()
        if response == {}:
            print("No result")
        else:
            print("[{}] {}".format(response.get("id"), response.get("name")))
    except ValueError:
        print("Not a valid JSON")#include "search_algos.h"

/**
  * binary_search - Performs binary search on a sorted array of integers.
  * @array: Pointer to the first element of the array to be searched.
  * @size: Number of elements in the array.
  * @value: The value to search for.
  *
  * Return: Returns -1 if the value is not found or if the array is NULL.
  *         Otherwise, returns the index where the value is located.
  *
  * Description: Displays the [sub]array being searched after each change.
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
