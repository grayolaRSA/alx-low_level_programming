#include "main.h"
#include <stddef.h>

/**
 *_strspn - function to find span of string in bigger string
 *@s: string to be spanned
 *@accept: string where first string is find inside of
 *Return: string length
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
break;
}
}
if (!accept[j])
{
break;
}
}
return (i);
}
