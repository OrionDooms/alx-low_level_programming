#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: linked list.
 * @n: takes in a integer.
 * Return: return a new added node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *vice;

	vice = malloc(sizeof(listint_t));
	if (vice != NULL)
	{
		vice->n = n;
		vice->next = *head;
		*head = vice;
		return (vice);
	}
	return (NULL);
}
