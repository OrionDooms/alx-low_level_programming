#include "main.h"
/**
 * _strlen - finds the length of a string
 * @s: takes in a string
 * Return: returns the length of a string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
