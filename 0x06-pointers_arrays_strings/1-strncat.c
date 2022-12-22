#include "main.h"

/**
*_strncat - similar to strcat but with n char spec
* @dest: character
* @src: character
* @n: integer
*
*Return: char
*/

char *_strncat(char *dest, char *src, int n)
{
	int u;
	char *c = dest;

	while (*dest != '\0')
		dest++;

	for (u = 0; u < n && src[u] != 0; u++)

		dest[u] = src[u];

	dest[u] = '\0';
	return (c);
}
