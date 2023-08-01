#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node of a linked list.
 * @head: linked list.
 * @index: the position in a linked list.
 * Return: (1) successful (-1) failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *vice;
	int i, a = index;

	if (a < 0 || index > listint_len(*head))
		return (-1);
	tmp = *head;
	if (a == 0)
	{
		*head = (*head)->next;
		tmp->next = NULL;
		free(tmp);
		return (1);
	}
	for (i = 0; i < a - 1; i++)
	{
		tmp = tmp->next;
	}
	vice = tmp->next;
	tmp->next = tmp->next->next;
	vice->next = NULL;
	free(vice);
	return (1);

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
