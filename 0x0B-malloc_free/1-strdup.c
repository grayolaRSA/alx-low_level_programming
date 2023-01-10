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
unsigned int i, y;

if (str == NULL)
return (NULL);

for (i = 0; str[i];)
{
i++;
}
s = malloc(i * (sizeof(char)));

if (s == NULL)
return (NULL);

for (y = 0; y < i; y++)
s[y] = str[y];

return (s);
_putchar('\n');
}
