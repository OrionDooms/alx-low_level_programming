#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - deletes the node at index in a linked list.
 * @head: head of a linked list.
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del, *move_node;
	unsigned int i = 0;

	del = *head;
	while (i < index)
	{
		move_node = del;
		del = del->next;
		if (del == NULL)
			return (-1);
		i++;
	}
	move_node->next = del->next;
	free(del);
	return (1);
}
