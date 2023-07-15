#include <stdio.h>
#include "search_algos.h"

/**
 * recursive_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @array: array input
 * @low: lower bound of the search range
 * @high: upper bound of the search range
 * @value: search value
 * Return: index of search result
 */
int recursive_search(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i < high)
			printf(", ");
		else
			printf("\n");
	}

	if (low > high)
		return (-1);

	mid = low + (high - low) / 2;

	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
		return (recursive_search(array, low, mid - 1, value));

	return (recursive_search(array, mid + 1, high, value));
}

/**
 * binary_search - calls to binary_search to return
 * the index of the number
 *
 * @array: array input
 * @size: array size
 * @value: search value
 * Return: search index
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}
