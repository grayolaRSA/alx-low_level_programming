#include "main.h"
#include <stdlib.h>

/**
*_strdup - duplicates a string and to a new location
*@str: string variable
*Return: pointer
*/

char *_strdup(char *str)
{
char *s;
unsigned int v, y;

if (str == NULL)
return (NULL);

for (v = 0; str[v];)
v++;

s = malloc(v * sizeof(char));

if (s == NULL)
return (NULL);

for (y = 0; y < v; y++)
s[y] = str[y];

return (s);
}
