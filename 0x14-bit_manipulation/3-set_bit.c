#include <stdio.h>
#include "main.h"

/**
 *set_bit - sets value of a bit to 1 at given index
 *@n: pointer to bit
 *@index: index of bit
 *Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
	{
		return (-1);
	}

	*n |= 1UL << index;
	return (1);
}
