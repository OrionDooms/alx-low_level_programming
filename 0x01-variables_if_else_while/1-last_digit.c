#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * decription - This program takes in random number each time
 * then if the value is equal to zero or if it's greater then 5 or
 * if it's less then 6 but not 0 it prints out message.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int z;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	z = n % 10;
	if (z == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, z);
	}
	else if (z > 5)
	{
		printf("Last digit of %d is %d and is greater then 5\n", n, z);
	}
	else
	{
		printf("Last digit of %d is %d and is less then 6 and not 0\n", n, z);
	}
	return (0);
}
