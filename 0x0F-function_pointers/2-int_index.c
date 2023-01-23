#include "function_pointers.h"

/**
*int_index - searches for match in array
*@array: array to be searched within
*@size: size of array
*@cmp: function that compares
*Return: either index or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size <= 0)
return (-1);

if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}
}
return (-1);
}
