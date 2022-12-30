#include "main.h"

/**
 * string_toupper - change all lowercase letters to uppercase
 * @str: string
 *
 * Return: pointer
 */

char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] -= 32;
		}
	i++;
	}
	return (str);
}
