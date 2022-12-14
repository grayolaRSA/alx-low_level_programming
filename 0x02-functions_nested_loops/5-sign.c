#include "main.h"

/**
 *print_sign - prints the sign of the number
 *
 *Return: +1, 0 or -1
/*

int print_sign(int n)

{
int r;
int n;

if (n > 0)
{
r = 1;
printf('+');
}

else if (n < 0)
{
r = -1;
printf('-');
}

else
{
r = 0;
printf('0');
}
return (r);
}
