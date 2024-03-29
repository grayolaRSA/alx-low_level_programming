#include <stdio.h>
#include "main.h"

/**
 *flip_bits - function to flip bits
 *@n: integer
 *@m: integer
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x)
	{
		count += x & 1;
		x >>= 1;
	}

	return (count);
}
