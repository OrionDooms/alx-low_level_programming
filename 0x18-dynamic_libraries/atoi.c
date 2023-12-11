#include "main.h"
/**
 * _atoi - takes a string and turns it in to integers.
 * @s: Takes in a string.
 * Return: return a integer.
 */
int _atoi(char *s)
{
	int n, i, a;

	i = 0;
	n = 0;
	a = 0;
	while (s[i])
	{
		if ((s[i] >= '0' && s[i] <= '9'))
		{
			a = (s[i] - '0');
			n = n * 10 + a;
			i++;
		}
	}
	return (n);
}
