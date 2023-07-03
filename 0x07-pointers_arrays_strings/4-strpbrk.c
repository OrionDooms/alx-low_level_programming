#include "main.h"
/**
 * _strpbrk - finds the first character in *s that matches
 * a character in *accept.
 * @s: Takes in a string.
 * @accept: Takes in a character.
 * Return: a string or a NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	if (accept == NULL)
		return (NULL);
	return (NULL);
}
