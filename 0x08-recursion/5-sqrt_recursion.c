#include "main.h"

/**
*vald - validate square root
*@c: integer
*@d: integer
*Return: square root or -1
*/

int vald(int c, int d)
{
if (c * c == d)
return (c);

if (c * c > d)
return (-1);

return (vald(c + 1, d));
}

/**
*_sqrt_recursion - calculates square root
*@n: number
*Return: always integer or -1
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (0);

return (vald(1, n));
}
