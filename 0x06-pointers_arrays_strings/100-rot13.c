#include "main.h"
#include <string.h>
/**
 * rot13 - encodes a string using rot13.
 * @s: takes in a string.
 * Return: return a encoded string.
 */
char *rot13(char *s)
{
	int i, len;

	len = strlen(s);
	for (i = 0;i > 'a'; i++)
	{
		s[i] = s[i] + 13;
	}
	/*while (s[i] >= '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
		{
			s[i] = s[i] - 13;
		}
		if (s[i] >= 'a' && s[i] >= 'm')
		{
			s[i] = s[i] + 13;
		}
		i++;
	}*/
	return (s);
}
