#include "function_pointers.h"
#include <unistd.h>

/**
*print_name - prints name
*@name: name
*@f: function pointer
*return: void
*/

void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}

