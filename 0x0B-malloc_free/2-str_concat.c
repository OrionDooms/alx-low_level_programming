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

	for (i = 0; s1[i] != '\0'; i++)
	for (a = 0; s2[a] != '\0'; a++)

	z = malloc(sizeof(char) * (i + a));
	for (e = 0; s1[e] != '\0'; e++)
	{
		if (s1[e] == '\0')
		{
			z[e] = s1[e];
		}
		else
			z[e] = s1[e];
	}
	for (b = 0; s2[b] != '\0'; b++, e++)
	{
		z[e] = s2[b];
	}
	return (z);
	free(z);



}
