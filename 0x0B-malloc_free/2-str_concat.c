#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings.
 * @s1:Takes in a pointer of characters.
 * @s2:Takes in a pointer of characters.
 * Return:a pointer.
 */
char *str_concat(char *s1, char *s2)
{
	char *z;
	int i, a, e, b;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s1 = " ";
	while (*s1 != '\0')
		i++, s1++;
	while (*s2 != '\0')
		a++, s2++;
	z = malloc(sizeof(char) * (i + a));
	if (z == NULL)
		return (NULL);
	for (e = 0; e < i; e++)
	{
		z[e] = s1[e];
	}
	for (b = 0; b < a; b++, e++)
	{
		z[e] = s2[b];
	}
	return (z);
	free(z);
}
