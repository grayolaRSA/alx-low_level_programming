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
int i, j;

if (max < min)
return (NULL);

for (i = 0; i <= max && i >= min; i++)
	;

s = malloc((i * (sizeof(int))) + 1);
if (s == NULL)
return (NULL);

for (j = 0; j <= max; j++, min++)
s[j] = min;

return (s);
}
