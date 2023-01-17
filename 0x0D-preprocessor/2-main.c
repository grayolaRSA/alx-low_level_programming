#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
*main - prints file name
*__FILE__: file name macro
*Return: always 0
*/

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}

#endif
