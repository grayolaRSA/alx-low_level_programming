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

if (size == 0)
return (NULL);

init  = (char *) malloc(size * sizeof(char));

if (init == NULL)
return (NULL);

for (i = 0; i < size;)
{
init[i] = c;
i++;
}
init[i] = '\0';

free(init);

return (init);
}
