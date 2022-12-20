#include "main.h"

/**
 *_puts - prints out characters
 *@str: - character
 *
 *return: always void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
