#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *free_listint - frees listint_t list
 *@head: pointer to head node
 *Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *temp2;

	if (head == NULL)
	{
		exit(98);
	}

	temp = head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
}
