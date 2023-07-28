#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list.
 * @head: first node of the linked list.
 */
void free_list(list_t *head)
{

	list_t *p, *k;

	p = head;

	while (p != NULL)
	{
		k = p->next;
		free(p->str);
		free(p);
		p = k;
	}
}
