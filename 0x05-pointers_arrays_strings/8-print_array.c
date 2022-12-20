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
	for (n = 0; a[n] != '\0'; n++)
		printf("%d ,", a[n]);
	printf("\n");
}
