#include "main.h"
#include <stddef.h>

/**
 *_strpbrk - function to find span of string in bigger string
 *@s: string to be spanned
 *@accept: string where first string is find inside of
 *Return: string length
 */

char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
return (&s[i]);
}
}
}
return (NULL);
}
