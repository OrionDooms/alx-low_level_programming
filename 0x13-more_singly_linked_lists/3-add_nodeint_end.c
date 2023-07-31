#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: linked list.
 * @n: takes in a integer.
 * Return: returns a new added node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *vice = malloc(sizeof(listint_t));

	if (vice != NULL)
	{
		vice->n = n;
		vice->next = NULL;
		if (*head == NULL)
		{
			*head = vice;
			return (vice);
		}
		last = *head;
		while (last->next)
		{
			last = last->next;
		}
		last->next = vice;
		return (vice);
	}
	return (NULL);
	free(vice);
}
