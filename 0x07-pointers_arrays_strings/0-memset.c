#include "main.h"

/**
*_memset - sets memory to specific bytes
* @s: definition
* @b: source
* @n: value
*Return: character
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
