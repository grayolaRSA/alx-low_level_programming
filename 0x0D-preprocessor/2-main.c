#ifndef _FILE_NAME_H_
#define _FILE_NAME_H_
#include <stdio.h>

/**
*main - prints file name
*__FILE__: file name macro
*return: always 0
*/

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}

#endif
