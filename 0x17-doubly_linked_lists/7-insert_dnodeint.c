#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts node at index
 *@h: header node
 *@idx: index where new pointer is to be inserted
 *@n: integer data in new node
 *Return: address of new node(or null if it fails)
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp, *new_node;

	if (*h == NULL && idx != 0)
	{
		printf("List is empty");
		return (NULL);
	}

	else
	{
		temp = *h;
		if (temp != NULL && idx != 0)
		{
			while (i < idx - 1)
			{
				temp = temp->next;
				i++;
			}
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->prev = temp;
			new_node->next = temp->next;
			if (temp->next != NULL)
				temp->next->prev = new_node;
			temp->next = new_node;
		}

	}
		return (new_node);
}
