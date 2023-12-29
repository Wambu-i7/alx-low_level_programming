#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index.
 * @head: pointer to the head of the list.
 * @index: index of the node, starting from 0
 * Return: returns the nth node of the list or
 *  NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	if (head == NULL)
	{
		return (NULL);
	}
	return (head);
}
