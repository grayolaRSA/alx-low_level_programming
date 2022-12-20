#include "main.h"

/**
 *puts2 - prints every other character
 *@str: define
 *
 *return: void
 */

void puts2(char *str)
{
	int d;

	for (d = 0; str[d] != '\0'; d++)

	if (d % 2 == 0)

		_putchar(str[d]);

	_putchar('\n');


}
