#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_nodeint - function to add node
 *@head: pointer to head node
 *@n: int
 *Return: pointer to new head node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
