#include "main.h"

/**
 * times_table - function that gives the tables
 *
 * Return: Always 0.
 */

void times_table(void)
{
	int i;
	int j;
	int m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			m = i * j;
			if (m <= 9)
			{
				if ((m != 0) || (j != 0))
				{
					_putchar(' ');
				}
				_putchar('0' + m);
			} else
			{
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
