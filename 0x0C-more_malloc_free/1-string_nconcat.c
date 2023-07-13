#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: n bytes of s2.
 * Return: a Pointer or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *z;
	int i, j;

	z = malloc(strlen(s1) + strlen(s2) + 1);
	if (z != NULL)
	{
		for (i = 0, j = 0; s1[i] != '\0'; i++, j++)
			z[j] = s1[i];
		if (n >= strlen(s2))
		{
			for (i = 0; s2[i] != '\0'; i++, j++)
				z[j] = s2[i];
		}
		else
		{
			for (i = 0; s2[i] != '\0' && n--; i++, j++)
				z[j] = s2[i];
		}
		z[j] = '\0';
		return (z);
	}
	else
		return (NULL);
	free(z);
}
