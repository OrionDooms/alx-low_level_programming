#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: head of the linked list.
 * @n: new node.
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->prev = NULL;
		new_node->n = n;
		*head = new_node;
		return (*head);
	}
	else
	{
		h = *head;
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = *head;
		h->prev = new_node;
		*head = new_node;
		return (*head);
	}
	return (NULL);
}
