# include "main.h"

/**
 *  print_last_digit - print the last digit
 * @n: description
 *  Return: Always int.
 */

int print_last_digit(int n)
{
	int c;

	if (n < 0)
	{
		n = (n * -1);
	}
	c = n % 10;
	_putchar('0' + c);
	return (c);
}
