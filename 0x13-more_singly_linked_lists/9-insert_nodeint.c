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
	int i = 0, a = idx;

	if (head == NULL || i > a)
		return (NULL);
	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	for (i = 0; i < a - 1; i++)
	{
		vice = vice->next;
	}
	if (a > i)
	{
		return (NULL);
	}
	tmp->next = vice->next;
	vice->next = tmp;
	return (tmp);
}
