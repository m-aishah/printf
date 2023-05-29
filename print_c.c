#include "main.h"

/**
 * print_c - A function that prints a character
 * @list: A va_list pointing to the character to be printed.
 *
 * Return: void
 */

void print_c(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	if (!ch)
	{
		exit(1);
	}
	write(1, &ch, 1);
}
