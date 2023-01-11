#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*str_concat - concatenates two strings
*@s1: first string
*@s2: second string
*Return: string
*/

char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int y;
unsigned int len1;
unsigned int len2;

if (s1 == NULL)

{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}

{
len1 = strlen(s1);
len2 = strlen(s2);
s = malloc((len1 + len2 + 1) * sizeof(char));
}
printf("the address of the new memory is %p\n", (void *)s);
printf("the size of the new memory is %lu\n", sizeof(s));
if (s == NULL)
return (NULL);

for (y = 0; y < len1; y++)
{
s[y] = s1[y];
}

for (y = 0; y < len2; y++)
{
s[len1 + y] = s2[y];
}

return (s);
}
