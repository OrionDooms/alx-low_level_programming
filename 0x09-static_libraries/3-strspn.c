#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: takes in a string.
 * @accept: takes in a prefix.
 * Return: the value of the lenght of the prefix.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, c;

	i = 0;
	c = 0;
	while (s[i] != '\0')
	{
		while (accept[i] != '\0')
		{
			if (s[i] == accept[i])
			{
			       c++;
			}
		}
		i++;
	}
	return (c);
}
