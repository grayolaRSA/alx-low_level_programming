#include "main.h"

/**
*create_array - creates array
*@size: size of array
*@c: first character of string
*Return: string
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *init;

if (size <= 0)
return (NULL);

init  = malloc(size);

if (init == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
init[i] = c;
}
free(init);

return (init);
}
