#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
  char tr[] = "Expect The Best. Prepare For The Worst. Capitalize On What Comes.\nHello World! Hello-world 0123456hello World\t Hello World.Hello World\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("\n");
    printf("%s", tr);
    return (0);
}
