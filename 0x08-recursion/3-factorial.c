#include "main.h"
/**
 * factorial - returns the factorial of a given number.
 * @n: Take in a integer.
 * Return: The factorial of a integer.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
