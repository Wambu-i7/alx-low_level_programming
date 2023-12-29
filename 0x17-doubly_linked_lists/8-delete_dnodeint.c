#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index.
 * @head: Pointer to pointer to the head.
 * @index: Index position of the deleted node.
 * returns: 1 if it succeeded and -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		current = current->next;
	}
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
	}
	else
	{
		if (current != NULL)
		{
			if (current->prev != NULL)
			{
				current->prev->next = current->next;
			}
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
		}
		else
		{
			return (-1);
		}
	}
	free(current);
	return (1);
}
