#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: head of a linked list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del_node;

	while (head != NULL)
	{
		del_node = head;
		head = head->next;
		free(del_node);
	}
}
