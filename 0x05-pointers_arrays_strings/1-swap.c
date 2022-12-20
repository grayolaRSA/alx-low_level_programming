#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps variables
 *@a: description
 *@b: description
 *
 *Return: always void
 */

void swap_int(int *a, int *b)
{

	int s;

	s = *a;
	*a = *b;
	*b = s;
}
