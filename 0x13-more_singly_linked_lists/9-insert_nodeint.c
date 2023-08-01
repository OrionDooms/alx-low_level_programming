#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the linked list.
 * @idx: the position in a linked list.
 * @n: the new node should be added.
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *vice = *head;
	int i, a = idx;

	if (idx > listint_len(*head))
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	if (a == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
		free(tmp);
	}
	for (i = 0; i < a - 1; i++)
	{
		vice = vice->next;
	}
	tmp->next = vice->next;
	vice->next = tmp;
	return (tmp);
	free(tmp);
}
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
