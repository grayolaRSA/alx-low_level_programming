#include "main.h"
#include <stdlib.h>

/**
*_calloc - allocates memory for 2D array
*@nmemb: number of elements
*@size: size of elements
*Return: pointer or null
*/

void *_calloc(unsigned int nmemb, unsigned int size)

{
unsigned int *p;

if (nmemb == 0)
return (NULL);

if (size == 0)
return (NULL);

p = malloc(nmemb * size);
if (p == NULL)
return (NULL);

*p = (0);

return (p);
}
