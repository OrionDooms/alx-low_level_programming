#include "main.h"
/**
 * _strstr - returns a pointer to the beginning of the first
 * occurrence of needle in haystack.
 * @haystack: Takes in a string.
 * @needle: Takes in a second string.
 * Return: return a string or a NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;

	while (*h != '\0')
	{
		if (*h == *needle)
		{
			return (h);
		}
		h++;
	}
	if (h == NULL)
		return (NULL);
	return (NULL);
}
