#include "main.h"

/**
*_strlen_recursion - returns length of string
*@s: string
*Return: string length
*/

int _strlen_recursion(char *s)
{
int i = 0;

if (*s)
{
i++;
i += _strlen_recursion(s + 1);
}

return (i);
}

/**
 * pal_checker - check if s is palindrome.
 * @s: string base address.
 * @i: left index.
 * @j: rigth index.
 * Return: 1 if s is palindrome, 0 otherwise.
 */
int pal_checker(char *s, int i, int j)
{
	if (s[i] == s[j])
		if (i > j / 2)
			return (1);
		else
			return (pal_checker(s, i + 1, j - 1));
	else
		return (0);
}
/**
 * is_palindrome - check if s is palindrome
 * @s: base address for string.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_palindrome(char *s)
{
	return (pal_checker(s, 0, _strlen_recursion(s) - 1));
}
