#include "main.h"

/**
* main - prints file name
* @argc: count of command line arguments
* @argv: string characters
*
* Return: Always(0) Success
*/

int main(int argc, char **argv)
{
while (argc--)
{
int i = 0;
char *s = *argv++;

while (s[i] != '\0')

{
_putchar(s[i]);
i++;
}
_putchar('\n');
}

return (0);
}
