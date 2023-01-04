#include "main.h"

/**
*_memcpy - copies bytes from source to destination
*@dest: character
*@src: character
*@n: number of bytes
*Return: character
*/

char *_memcpy(char *dest, char *src, unsigned int n)

{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);

}
