#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c - The character that needs to be checked
 * Return: 1 if character is lowercase
 */
int _islower(int c)
{
	int i;
	char str[27] = "abcdefghijklmnopqrstuvwxyz";

	i = 1;
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
