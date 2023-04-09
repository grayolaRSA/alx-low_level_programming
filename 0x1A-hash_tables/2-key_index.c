#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *key_index - returns the key index
 *@key: the key
 *@size: the size of the array
 *Return: the index of the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	else
		return (hash_djb2(key) % size);
}
