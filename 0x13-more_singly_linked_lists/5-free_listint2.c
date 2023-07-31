#include "lists.h"
/**
 * free_listint2 - that frees a listint_t list
 * @head: - linked list.
 */
void free_listint2(listint_t **head)
{
	listint_t *vice, *tmp;

	tmp = *head;
	while (tmp != NULL)
	{
		vice = tmp->next;
		free(tmp);
		tmp = vice;
	}
	*head = NULL;
}
