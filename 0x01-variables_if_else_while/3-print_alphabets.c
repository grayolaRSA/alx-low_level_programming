#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
char ltr;

for (ltr = 'a'; ltr <= 'z'; ltr++)
putchar(ltr);

for (ltr = 'A'; ltr <= 'Z'; ltr++)
putchar(ltr);

putchar('\n');

return (0);
}
