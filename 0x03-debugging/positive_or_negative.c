#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - Entry point
 *
 * description - This program takes in a random number each time
 * then if the value is less it prints negative or greater prints
 * positive and if it,s zero it prints zero
 *
 * Return: 0 (success)
 */
void  positive_or_negative(int n)
{
        srand(time(0));
        n = rand() - RAND_MAX / 2;
        /*your code goes there*/
        if (n < 0)
        {
                printf("%d is negative\n", (n));
        }
        else if (n > 0)
        {
                printf("%d is positive\n", (n));
        }
        else
 
                printf("%d is zero\n", (n));
}
