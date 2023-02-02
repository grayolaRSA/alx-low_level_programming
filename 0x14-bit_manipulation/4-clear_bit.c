#include <stdio.h>
#include "main.h"

/**
 *clear_bit - clear bit
 *@n: bit identified to be cleared
 *@index: index to identify bit to be cleared
 *Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 8 * sizeof(unsigned long int))
	{
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
