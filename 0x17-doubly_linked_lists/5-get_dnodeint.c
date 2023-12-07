#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: head of linked list.
 * @index: the nth node.
 * Return: return nth node or nth does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new_node = head;
	unsigned int i = 0;

	if (head == NULL)
		return (head);
	while (new_node != NULL)
	{
		if (i == index)
			return (new_node);
		new_node = new_node->next;
		i++;
	}
	return (NULL);
}
