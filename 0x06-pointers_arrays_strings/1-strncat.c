#include "main.h"
/**
 * _strncat - appends the src string to the dest string
 * * with only the amount given.
 * @dest: takes in the first string.
 * @src: takes in the first string.
 * @n: takes the amount.
 * Return: a string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, a, e;

	i = 0;
	a = 0;
	if (dest == NULL || src == NULL)
		return (dest);
	while (dest[i] != '\0')
	{
		i++;
	}
	e = i;
	while (a < n && src[a] != '\0')
	{
		dest[e] = src[a];
		e++;
		a++;
	}
	dest[e] = '\0';
	return (dest);
}
