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
	char *a, *b, *h = haystack;

	while (*h != '\0')
	{
		if (*h == *needle)
		{
			a = h;
			b = needle;
			while (*a && *b)
			{
				if (*a != *b)
				{
					break;
				}
				a++;
				b++;
			}
			if (b == NULL)
				return (h);
		}
		h++;
	}
	/*if (needle == NULL)
		return (h);*/
	return (NULL);
}
