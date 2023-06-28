#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: Takes in the first string
 * @src: Takes in the second string
 * Return: dest with both the first and the second string
 */
char *_strcat(char *dest, char *src)
{
	int i, a;

	i = 0;
	a = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i] = src[a];
		i++;
		a++;
	}
	return (dest);
}
