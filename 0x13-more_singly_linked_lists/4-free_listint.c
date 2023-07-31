#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list.
 * @head: linked lists.
 */
void free_listint(listint_t *head)
{
	listint_t *vice, *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		vice = tmp->next;
		free(tmp);
		tmp = vice;
	}
}
