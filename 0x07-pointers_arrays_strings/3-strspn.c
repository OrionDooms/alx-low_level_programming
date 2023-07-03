#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: takes in a string.
 * @accept: takes in a prefix.
 * Return: the value of the lenght of the prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, a;

	i = 0;
	a = 0;
	while (s[i] != '\0')
	{
		while (accept[a] != '\0')
		{
			if (accept[a] == s[i])
			{
				a = +a;

			}
			a++;

		}
		i++;
	}
	return (a);
}
