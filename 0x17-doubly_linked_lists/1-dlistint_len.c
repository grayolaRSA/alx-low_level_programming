#include "lists.h"

/**
 *dlistint_len - prints all the elements of a list
 *@h: pointer to the head of the list
 *
 *Return: length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
