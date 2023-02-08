#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 *_strstr - function to locate substring
 *@haystack: string where substring is located
 *@needle: substring
 *Return: pointer to substring if located
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
int haystack_len = strlen(haystack);
int needle_len = strlen(needle);

for (i = 0; i <= haystack_len - needle_len; i++)
{
for (j = 0; j < needle_len; j++)
{
if (haystack[i + j] != needle[j])
{
break;
}
}
if (j == needle_len)
{
return (&haystack[i]);
}
}
return (NULL);
}
