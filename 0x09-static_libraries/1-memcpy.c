#include "main.h"
/**
 * _memcpy - Copies n characters from the source to the destination.
 * @dest: Pointer to the destination.
 * @src: Pointer to the source.
 * @n: Number of bytes to copy.
 * Return: copies a src to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (n > i)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
