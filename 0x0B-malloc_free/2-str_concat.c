#include "main.h"
#include <stdlib.h>
/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*Return: string
*/

char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int y, i, j, k;

if (s1 == NULL)
i = 0;
for (i = 0; s1[i] != '\0'; i++)
	;


if (s2 == NULL)
k = 0;
for (k = 0; s2[k] != '\0'; k++)
	;

j = (i + k + 1);
s = malloc(j * (sizeof(char)));

if (s == NULL)
return (NULL);

for (y = 0; y < i; y++)
s[y] = s1[y];

for (y = 0; y < k; y++)
s[i + y] = s2[y];

s[i + k] = '\0';

return (s);
}
