#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - prints number of arguments
*@argc: number of arguments
*@argv: strings of arguments
*Return: always zero
*/

int main(int argc, char *argv[])
{
int i = 0, j = 0, add = 0;

if (argc < 2)
{
printf("0\n");
return (1);
}


for (i = 1; i < argc; i++)
{
j = atoi(argv[i]);
if (!j)
{
printf("Error\n");
return (1);
}

add += j;
}

printf("%d\n", add);
return (0);
}
