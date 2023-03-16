#include "lists.h"

/**
 *print_dlistint - prints all the elements of a list
 *@h: pointer to the head of the list
 *
 *Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int size_t = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size_t++;
	}
	return (size_t);
}
