#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: description
 *
 * return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int a, b;

		for (a = 0; a < n; a++)
	{
		for (b = 0; b < a; b++)
		{
			_putchar(32);
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
}
