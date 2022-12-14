#include "main.h"
#include <stdio.h>
/**
 *times_table - function prototype
 */
void times_table(void);

/**
 * main - produces results of nine times table
 *
 * Return: Always int.
 */
int main(void)

{
	int i;

	for (i = 0; i < 10; i++)
	{
		int j;


		for (j = 0; j < 10; j++)
		{
			int m;

			m = i * j;

				printf("%d   ", m);
		}
		printf("\n");
	}
	return (0);
}

void times_table(void)

{

	printf("Sing hallelujah");
}
