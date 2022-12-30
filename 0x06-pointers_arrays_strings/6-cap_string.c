#include "main.h"

/**
 * _strin - checks if char exists in string
 * @str: string
 * @c: char
 *
 * Return: pointer to str
 */

int _strin(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			return (1);
		}
	i++;
	}
	return (0);
}

/**
 * cap_string - capitalize all words in string
 * @str: string
 *
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i;
	char seperators[] = ", ; . ! ? \" ( ) { } \n \t";

	i = 0;

	while (str[i])
	{
		if (_strin(seperators, str[i]) || i == 0)
		{
			if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
			{
				str[i + 1] -= 32;
			}
		}
		i++;
	}
	return (str);
}
