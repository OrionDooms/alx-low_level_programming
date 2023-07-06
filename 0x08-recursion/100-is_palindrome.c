#include "main.h"
/*
 * _puts - prints a string.
 * @s: takes in a string.
 * Return: a string.
 */
char _puts(char *s)
{
	char c;

	if (*s)
	{
	       c = *s;
	      _puts(s + 1);
	}
	return (c);
}
/*
 * _rev - reverse a string.
 * @s: takes in a string.
 * Returns: a reverse string.
 */
char _rev(char *s)
{
	char b;

	if (*s)
	{
		_rev(s + 1);
		b = *s;
	}
	return (b);
}
/*
 * is_palindrome - string is a palindrome.
 * @s: takes in a string.
 * returns: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (0);
	if (_puts(s) == _rev(s))
		return (1);
	else
		return (0);
}
