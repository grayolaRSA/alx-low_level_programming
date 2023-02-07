#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * print_listint  - prints singly linked list
 *@h: list to be printed
 *Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d \n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
