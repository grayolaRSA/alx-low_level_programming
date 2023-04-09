#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_hash_n - adds a new hash node
 * @key: the node key
 * @value: value of the node
 *@head: pointer to head node
 * Return: pointer to the new node, or NULL
 */

hash_node_t *add_hash_n(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = *head;
	*head = node;

	return (node);
}

/**
 *hash_table_set - inserts an element into the table
 *@ht: hash table where element is being inserted into
 *@key: key of element being inserted
 *@value: value of element being inserted
 *Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	if (add_hash_n(&(ht->array[index]), key, value) == NULL)
		return (0);

	return (1);
}
