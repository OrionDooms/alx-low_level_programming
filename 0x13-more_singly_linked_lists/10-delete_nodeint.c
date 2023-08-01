#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *vice;
	int i = index;

	tmp = *head;
	if (tmp != NULL && tmp->n == i)
	{
		*head = tmp->next;
		return (-1);
	}
	while (tmp != NULL && tmp->n != i)
	{
		vice = tmp;
		tmp = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	vice->next = tmp-> next;
	return (1);
	free(tmp);
}
