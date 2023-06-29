#include "main.h"
/**
 * cap_string - capitalize all words of a string.
 * @s: takes in a string.
 * Return: return a string.
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] == ' ') || (s[i] == '\n'))
		{
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
			else
			{
				s[i] = s[i];
			}
		}
		else if (s[i] == '.')
		{
			i++;
			i++;
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
