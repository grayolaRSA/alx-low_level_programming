#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
*main - prints number of arguments
*@argc: number of arguments
*@argv: strings of arguments
*Return: always zero
*/

int main(int argc, char *argv[])
{
int i = 0, j = 0, add = 0;
char *endptr;

if (argc == 1)
{
printf("0\n");
return (0);
}


for (i = 1; i < argc; i++)
{
errno = 0;
j = strtol(argv[i], &endptr, 10);
if (errno == ERANGE || *endptr != '\0')
{
printf("Error\n");
return (1);
}

add += j;
}

printf("%d\n", add);
return (0);
}
