#include "main.h"

/**
 *puts_half - prints second half of function
 *@str: definition
 *
 *return: void
 */

void puts_half(char *str)
{
	int a = 0, b;

	while (str[a] != '\0')
		a++;

	if (a + 1 % 2 != 0)
		b = (a - 1) / 2;
	else
		b = a / 2;
	b++;

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}
