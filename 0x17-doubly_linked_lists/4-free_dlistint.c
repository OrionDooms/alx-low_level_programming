#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head of a linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del_node = head;

	if (head->next == NULL)
	{
		head = NULL;
		free(head);
	}
	else
	{
		if (del_node->next != NULL)
		{
			del_node = del_node->next;
			free(del_node)
		}
		del_node->prev->next = NULL;
		free(del_node);
	}
}
