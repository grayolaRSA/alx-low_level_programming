#include <stdio.h>
#include "main.h"

/**
 *get_bit - returns value at a certain index
 *@n: value at index
 *@index: index
 *Return: value at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
	{
		return (-1);
	}

	return ((n & (1UL << index)) != 0);
}
