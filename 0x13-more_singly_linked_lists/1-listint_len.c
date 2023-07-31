#include "lists.h"
/**
 * listint_len - count all the elements of a listint_t list.
 * @h: linked list.
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
