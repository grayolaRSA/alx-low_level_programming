#include "main.h"

/**
*prchk - checks if number is prime
*@a: integer
*@b: integer
*Return: prime number or 0
*/

int prchk(int a, int b)
{
if (a <= 2)
return (0);

if (a % b == 0)
return (0);

if (b * b > a)
return (1);

return (prchk(a, b + 1));
}

/**
*is_prime_number - checks whether number is prime
*@n: integer
*Return: 1 or 0
*/

int is_prime_number(int n)
{
if (n == 0)
return (0);

return (prchk(n, 2));
}

