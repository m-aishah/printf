#include "main.h"

/**
 * print_s - Function that prints a string.
 * @list: A va_list pointing to the string to be printed.
 */

void print_s(va_list list)
{
	char *s;
	int index;

	s = va_arg(list, char *);

	for (index = 0; s[index]; index++)
		write(1, s, 1);
}
