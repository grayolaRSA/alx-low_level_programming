#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*sum_them_all - sums all integers
*@n: arguments
*Return: always 0
*/

int sum_them_all(const unsigned int n, ...)
{
unsigned int total = 0;
unsigned int i;
va_list args;

if (n == 0)
return (0);

va_start(args, n);
for (i = 0; i < n; i++)
{
total += va_arg(args, unsigned int);
}
va_end(args);
return (total);
}

