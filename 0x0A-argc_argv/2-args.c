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
{
break;
}
else
{
printf("%s\n", argv[i]);
}
}
return (0);
}
