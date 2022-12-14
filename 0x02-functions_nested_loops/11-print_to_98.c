#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print nums to 98
 *
 *@n: description - int
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
		printf("98\n");
	} else if (n > 98)
	{
		while (n >= 99)
		{
			printf("%i, ", n);
			n--;
		}
		printf("98\n");
	}
}
