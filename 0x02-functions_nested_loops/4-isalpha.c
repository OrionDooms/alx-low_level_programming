#include "main.h"
/**
 * _isalpha - checks for lowercase character
 * @c: The character that needs to be checked
 * Return: 1 if character is lowercase otherwise return: 0
 */
int _isalpha(int c)
{
	int i;
	char str[54] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

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
