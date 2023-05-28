#include "main.h"

/**
 * print_d - Function that prints an integer.
 * @list: A va_list pointing to the integer to be printed.
 */

void print_d(va_list list)
{
	int d;

	d = va_arg(list, int);

	print_number(d);
}
