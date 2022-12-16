#include "main.h"

/**
 * more_numbers - prints number patterns repeatedly
 *
 * return: void
 */

void more_numbers(void)
{

	int b;

	for (b = 0; b < 10; b++)

	{
		int a;

		for (a = 0; a < 15; a++)
		{
			if (a >= 10)

				_putchar('0' + 1);


			_putchar('0' + (a % 10));
		}
		_putchar('\n');
	}
}
