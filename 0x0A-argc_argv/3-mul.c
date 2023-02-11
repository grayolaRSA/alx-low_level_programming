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
int j, k, l;

if (argc != 3)
{
printf("Error/n");
return (1);
}

{
j = atoi(argv[1]);
k = atoi(argv[2]);
l = j *k;
{
printf("%d\n", l);
}
}
return (0);
}
