#include "main.h"
/**
 * _memset - copies the b to the first n charater of a string.
 * @s: This is a pointer to the memory to fill.
 * @b: The string will contant bytes b.
 * @n: This is the number of bytes to be to the value.
 * Return: a pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (s);
}
