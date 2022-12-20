#include "main.h"

/**
 *rev_string - reverses strings
 *@s: variable for this function
 *
 *return: void
 */

void rev_string(char *s)
{
	int u, v, x;
	char y;

	u = 0;

	while (s[u] != '\0')
		u++;

	x = u - 1;
	for (v = 0; x >= 0 && v < x; x--, v++)
	{
		y = s[v];
		s[v] = s[x];
		s[x] = y;
	}
}
