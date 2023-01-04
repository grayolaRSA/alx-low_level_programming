#include "main.h"

/**
*_strchr - finds first occurence of character
*@s: pointer to character
*@c: character
*Return: integer
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
