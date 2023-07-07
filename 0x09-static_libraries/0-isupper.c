#include "main.h"
/**
 * _isupper - checks for uppercase character.
 * @c: The character that needs to be checked
 * Return: 1 if there is a uppercase otherwise return: 0
 */
int _isupper(int c)
{
	int i;
	char str[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	i = 0;
	{
		while (str[i] != '\0')
		{
			if (c == str[i])
			{
				return (1);
			}
			i++;
		}
		return (0);
	}
}
