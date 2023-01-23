#include "function_pointers.h"


/**
*array_iterator - performs an action
*@array: integer array
*@size: size of array
*@action: function to be used
*return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))

{
unsigned long i;

for (i = 0; i < size; i++)
action(array[i]);
}

