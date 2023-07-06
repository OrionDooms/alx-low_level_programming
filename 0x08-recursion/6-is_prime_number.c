#include "main.h"

int is_prime_number(int n)
{
	if (n == 1 )
	{
		return (0);
	}
	if (n == 2)
	{
		return (0);
	}
	if (n == 0)
		return(1);
	if (n > 0)
	{
		return (n = is_prime_number(n / 2));
	}
}
