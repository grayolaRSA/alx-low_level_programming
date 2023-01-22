#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - prints strings
*@separator: strings to be printed
*@n: number of strings to be printed
*return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
char *c;
va_list list;

va_start(list, n);
for (i = 0; i < n; i++)
{
c = va_arg(list, char *);
if (c != NULL)
printf("%s", c);
else
printf("(nil)");
if (i < n - 1 && separator)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
