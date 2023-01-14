#include "main.h"
#include <stdlib.h>

/**
*array_range - creates integer arrays
*@min: min value in array
*@max: max value in array
*Return: array integers
*/

int *array_range(int min, int max)
{
int *s;
int i = 0;

if (max < min)
return (NULL);

for (i = 0; i <= max && i >= min; i++)
	;

s = malloc(i);
if (s == NULL)
return (NULL);

return (s);
}
