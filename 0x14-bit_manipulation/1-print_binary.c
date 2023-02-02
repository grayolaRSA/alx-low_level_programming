#include <stdio.h>
#include "main.h"

/**
 *print_binary - prints converted binary
 *@n: input integer to be converted
 *Return: binary output
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (8 * sizeof(unsigned long int) - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (!(n & mask))
	{
		mask >>= 1;
	}
	while (mask)
	{
		_putchar(n & mask ? '1' : '0');
		mask >>= 1;
	}
}
