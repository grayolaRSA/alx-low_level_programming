#include "main.h"
#include <stdlib.h>

/**
*string_nconcat - concatenates two strings
*@s1: first string
*@s2: second string
*@n: number of character from second string to be taken
*Return: string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
char *s;
unsigned int y, i, j, k, l;

if (s1 == NULL)
i = 0;
else
for (i = 0; s1[i] != '\0'; i++)
	;


if (s2 == NULL)
k = 0;
else
for (k = 0; s2[k] != '\0'; k++)
	;

l = (i + ((n + 1) / sizeof(char)));
s = malloc(l);

if (s == NULL)
return (NULL);

for (y = 0; y < i; y++)
s[y] = s1[y];

j = (n / (sizeof(char)));

if (j < k)
{
for (y = 0; y < j; y++)
s[i + y] = s2[y];
}
else
{
for (y = 0; y < k; y++)
s[i + y] = s2[y];
}
s[i + k] = '\0';

return (s);
}
