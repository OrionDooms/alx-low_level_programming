#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of linked list.
 * @head: head of the linked list.
 * Return: returns the sum of all the data or empty return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (new_node != NULL)
	{
		sum = sum + new_node->n;
		new_node = new_node->next;
	}
	return (sum);
}
