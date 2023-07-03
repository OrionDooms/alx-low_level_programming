#include "main.h"
/**
 * _strchr - locates a character in string.
 * @s: This is a pointer to a string.
 * @c: Takes in a character.
 * Return: A string from the character or NULL.
 */
char *_strchr(char *s, char c)
{
	if (*s == 0 || c == 0)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
