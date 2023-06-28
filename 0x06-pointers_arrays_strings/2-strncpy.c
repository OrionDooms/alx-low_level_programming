#include "main.h"
/**
 * _strncpy - copies the string point to by src
 * and the buffer pointed to by dest.
 * @src: takes in a string.
 * @dest: will receive the string.
 * @n: is the amount of string that will be copied.
 * Return: the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	size_t i;

	i = 0;
	if (dest == NULL && src == NULL)
	{
		return (dest);
	}
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
