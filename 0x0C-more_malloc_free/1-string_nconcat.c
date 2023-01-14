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
unsigned int y, i, k;

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

k = 0;
if (k < n)
k = n;

s = malloc(i + k + 1);

if (s == NULL)
return (NULL);

{
for (y = 0; y < i; y++)
s[y] = s1[y];
}

{
for (y = 0; y < k; y++)
s[i + y] = s2[y];
}

s[i + k] = '\0';

return (s);
}
