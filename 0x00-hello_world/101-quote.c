#include <unistd.h>
/**
 * main - Entry point
 * description - This program uses the write function to output a message.
 *
 * Return: 1 (success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
