#include "main.h"

/**
 * print_c - A function that prints a character
 * @list: A va_list pointing to the character to be printed.
 *
 * Return: void
 */

void print_c(va_list list)
{
	char c;

	c = va_arg(list, int);
	if (!c)
	{
		exit(1);
	}
	write(1, &c, 1);
}
