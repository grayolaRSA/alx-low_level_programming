#include "main.h"

/**
* _strncpy - copies strings from a source to a destination
* @dest: destination string
* @src: source string
* @n: length of string to be copied
*
*Return: char
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);

}
