#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 *add_node - function to add node
 *@head: pointer to head node
 *@str: string in node
 *Return: pointer to former head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
