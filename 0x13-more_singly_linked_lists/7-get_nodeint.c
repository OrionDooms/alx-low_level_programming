#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *vice = head;
        int i = 0, a = index;

        while (vice != NULL)
        {
		if (i == a)
		{
			return (vice->n);
		}
		i++;
                vice = vice->next;
        }
	return (NULL);
}
