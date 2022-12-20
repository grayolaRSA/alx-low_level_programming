#include "main.h"
#include <stdio.h>

/**
 *print_array - prints arrays
 *@a: definition
 *@n: definition 2
 *
 *return: void
 */

void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)

	if (r < n - 1)

		printf(" %d,", a[r]);
	else
		printf(" %d", a[r]);
	printf("\n");
}
