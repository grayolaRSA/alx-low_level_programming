#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_nodeint_end - function to add node at end
 *@head: pointer to head node
 *@n: int in node
 *Return: pointer to tail node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
