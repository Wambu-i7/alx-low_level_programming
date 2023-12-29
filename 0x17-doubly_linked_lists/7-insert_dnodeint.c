#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index.
 * @h: pointerto pointer to the head of the list.
 * @n: New data inserted.
 * @idx: Index where the data is being inserted.
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new_node, *current;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL || idx == 0)
	{
		new_node->prev = new_node;
		new_node->next = (*h);
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		(*h) = new_node;
		return (new_node);
	}
	current = (*h);
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL || current->next == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current;
	new_node->next = current->next;
	current->next->prev = new_node;
	current->next = new_node;
	return (new_node);
}
