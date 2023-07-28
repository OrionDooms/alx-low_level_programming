#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: first node of the linked list.
 * @str: takes in a string.
 * Return: return a new link to the linked list.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (head == NULL || new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
/**
 * _strlen - finds the length of a string.
 * @str: takes in a string of characters.
 * Return: return the length of a string.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
