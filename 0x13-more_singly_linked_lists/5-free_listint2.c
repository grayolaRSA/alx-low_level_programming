#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *free_listint2 - frees listint_t list
 *@head: pointer to head node
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	if (head == NULL)
	{
		return;
	}

	temp = *head;
	while (temp != NULL)
	{
		temp2 = temp->next;
		free(temp);
		temp = temp2;
	}
	head = NULL;
}
