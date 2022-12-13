#include "main.h"
#include <stdio.h>
void times_table(void);
/**
 * main - produces results of nine times table
 *
 * Return: Always 0.
 */
int main(void)

{

	int i = 0;
	int j = 0;

	times_table = i * j;

	while (i < 9)
		{

			while (j < 9)

				{
					printf("%p  ", times_table);
					j++;
				}

			printf("\n");
			i++;

		}
	return (0);
}
