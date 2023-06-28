#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: if both strings are equal return is 0, if first string
 * is greater return is a positive integer and if first string is
 * less the return is a negative integer.
 */

int _strcmp(char *s1, char *s2)
{
	int i, b;

	i = 0;
	while (s1[i] != '\0')
	{
		while (s2[i] != '\0')
		{
			if (s1[i] == s2[i])
			{
				return (0);
			}
			else if (s1[i] > s2[i])
			{
				b = (s1[i] - s2[i]);
				return (b);
			}
			else if (s1[i] < s2[i])
			{
				b = s1[i] - s2[i];
				return (b);
			}
			i++;
		}
	}
	return (0);
}
