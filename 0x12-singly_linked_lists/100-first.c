#include <stdio.h>
/**
 * first_print - function that prints before the main function is executed
 */
void first_print(void)__attribute__((constructor));
void first_print(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
