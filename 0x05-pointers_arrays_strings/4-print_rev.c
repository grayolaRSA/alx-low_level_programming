#include "main.h"

/**
 *print_rev - prints characters in reverse
 *@s: definition
 *
 *return: void
 */

void print_rev(char *s)
{
	int a, b;

	a = 0;
	while (s[a] != '\0')
		a++;

	for (b = a - 1; b >= 0; b--)
		putchar(s[b]);

	putchar('\n');
}
