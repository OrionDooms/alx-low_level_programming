#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: linked list.
 * Return: a pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *vice;

	tmp = NULL;
	vice = NULL;
	while (*head != NULL)
	{
		vice = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = vice;
	}
	*head = tmp;
	return (*head);

}
