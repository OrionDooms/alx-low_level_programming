#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: linked list.
 * Return: returns the head node’s data
 */
int pop_listint(listint_t **head)
{
	listint_t *vice = NULL;
	int remove = 0;

	vice = (*head)->next;
	remove = (*head)->n;
	free(*head);
	*head = vice;
	return (remove);
}
