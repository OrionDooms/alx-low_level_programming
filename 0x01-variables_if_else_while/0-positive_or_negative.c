#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/* main - program takes in a random number each time */
/* Description - then if the value is less it prints negative or greater
 * prints positive and if it's zero it prints.
 * zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n < 0)
	{
		printf("negative\n");
	}
	else if (n > 0)
	{
		printf("positive\n");
	}
	else
	{
		printf("zero");
	}
	return (0);
}
