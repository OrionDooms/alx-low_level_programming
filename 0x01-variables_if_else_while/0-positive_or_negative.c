#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * description - This program takes in a random number each time
 * then if the value is less it prints negative or greater prints
 * positive and if it,s zero it prints zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n < 0)
	{
		printf("%lu is negative\n", sizeof(n));
	}
	else if (n > 0)
	{
		printf("%lu is positive\n", sizeof(n));
	}
	else
	{
		printf("%lu is zero\n", sizeof(n));
	}
	return (0);
}
