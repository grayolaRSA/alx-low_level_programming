#include "main.h"
#include <stdio.h>

/**
*main - prints number of arguments
*@argc: number of arguments
*@argv: strings of arguments
*Return: always zero
*/

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
if (argv[i] == NULL)
break;
}
{
printf("%d\n", argc - 1);
}
return (0);
}
