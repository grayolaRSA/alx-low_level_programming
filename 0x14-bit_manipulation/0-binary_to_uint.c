#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/**
 *binary_to_uint - function to convert binary to unsigned int
 *@b: binary string
 *Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += (b[i] - '0') * pow(2, strlen(b) - i - 1);
		i++;
	}
	return (result);
}
