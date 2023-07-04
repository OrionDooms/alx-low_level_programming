#include "main.h"
/**
 * set_string - sets the value of a pointer to a char.
 * @s: Double pointer(pointer to pointer).
 * @to: Pointer to address of char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
