#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of the linked list
 * @idx: is the index of the list where the new node should be added.
 * @n: the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head, *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 1;

	if (new_node == NULL)
		return (NULL);

	head = *h;
	if (head == NULL)
		return (NULL);
	while (i < idx)
	{
		head = head->next;
		i++;
	}
	new_node->n = n;
	new_node->next = head->next;
	new_node->prev = head;
	head->next = new_node;
	head->next->prev = new_node;
	return (head);
}
