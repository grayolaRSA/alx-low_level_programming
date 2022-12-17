#include "main.h"

/**
 * print_line - prints line according to character size
 * @n: description
 *
 * return: always void
 */

void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
		_putchar('_');

	_putchar('\n');
}
