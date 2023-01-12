#include "main.h"
#include <stdlib.h>

/**
*malloc_checked - checks whether malloc ran successfully
*@b: size of memory allocated
*Return: pointer variable or 98 if malloc unsuccesful
*/

void *malloc_checked(unsigned int b)
{
void *ptr;

ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
