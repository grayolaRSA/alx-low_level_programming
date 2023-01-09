#include "main.h"

/**
*main - prints number of arguments
*@argc: number of arguments
*@argv: string characters
*Return: always zero
*/

int main(int argc, char **argv)
{
while (**argv != '\0')

{
_putchar(argc);
}
_putchar('\n');

return (0);
}
