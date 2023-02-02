#include <stdint.h>
#include "main.h"

/**
 *get_endianness - get endianness of a value
 *Return: 0 or 1
 */

int get_endianness(void)
{
	int i = 1;
	char *c = (char *) &i;

	return (*c);
}
