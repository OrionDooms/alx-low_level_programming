#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: linked list.
 * @index: the position in a linked list.
 * Return: the address of the node or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *vice = head;
	int i = 0, a = index;

	while (vice != NULL)
	{
		if (i == a)
		{
			return (vice);
		}
		i++;
		vice = vice->next;
	}
	return (NULL);
}
