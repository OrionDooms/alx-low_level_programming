#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of a linked list.
 * @n: the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h, *new_node;

	h = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	else
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new_node;
		new_node->n = n;
		new_node->prev = h;
		new_node->next = NULL;
		return (new_node);
	}
}
