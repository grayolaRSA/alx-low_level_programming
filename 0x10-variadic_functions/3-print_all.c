#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_all - prints all formats
*@format: number of arguments of diff formats
*return: nothing
*/

void print_all(const char * const format, ...)
{
int i = 0;
va_list args;
va_start(args, format);

while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
#ifdef PRINT_CHAR
printf("%c", va_arg(args, int));
#endif
break;
case 'i':
#ifdef PRINT_INT
printf("%d", va_arg(args, int));
#endif
break;
case 'f':
#ifdef PRINT_FLOAT
printf("%f", va_arg(args, double));
#endif
break;
case 's':
#ifdef PRINT_STRING
{
char *s = va_arg(args, char *);
if (s != NULL && *s != ('\0'))
printf("%s", s);
}
#endif
break;
default:
break;
}
if (format[i + 1] != '\0')
printf(", ");
i++;
}
va_end(args);
printf("\n");
}

