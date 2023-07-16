#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments.
 * @ac: number of arguments.
 * @av: arguments being executed.
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	int i, a, c = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	i = 0, a = 0;
	while (i < ac)
	{
		while (av[i][a] != '\0')
		{
			a++;
		}
		i++;
	}
	s = malloc(a + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		a = 0;
		while (av[i][a] != '\0')
		{
			s[c] = av[i][a];
			c++;
			a++;
		}
		s[c] = '\n';
		c++;
		i++;
	}
	return (s);
	free(s);
}
