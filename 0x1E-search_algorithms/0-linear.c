#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *linear_search - function to conduct search
 *
 *@array: list from which to search
 *@size: size of list being searched
 *@value: value being searched for
 *Return: integer
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
