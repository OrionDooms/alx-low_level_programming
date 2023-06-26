#include "main.h"
/**
 * *_strcpy - copies the string from src to dest
 * @src: takes in a string
 * @dest: this is where the string will be copy in too
 * Return: dest has the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
