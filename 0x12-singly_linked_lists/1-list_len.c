#include "lists.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * list_len  - prints singly linked list
 *@h: list to be printed
 *Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str != NULL)
		h = h->next;
		count++;
	}
	return (count);
}
