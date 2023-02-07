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
	listint_t *temp;

	if (head == NULL)
	{
		free(head);
		return;
	}

	if (head != NULL)
	{
		temp = head->next;
		free(head);
	}
	while (temp != NULL)
	{
		temp = temp->next;
		free(temp);
	}
	free(temp);
}
