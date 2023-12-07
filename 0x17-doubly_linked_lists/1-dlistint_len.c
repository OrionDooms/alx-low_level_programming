#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of linked list
 * Return: the number of elements in a linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	int i = 0;

	if (h == NULL)
		return (0);
	while (node != NULL)
	{
		node = node->next;
		i++;
	}
	return (i);
}
