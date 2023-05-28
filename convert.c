#include "main.h"

/**
 * convert - Function pointer that matches conversion specifier,
 *		to its correspnding function
 * @symbol: conversion specifier symbol to be matched
 *
 * Return: void
 */

void (*convert(char *symbol))(va_list list)
{
	formatter1 func[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i}
	};
	int i;

	for (i = 0; i < 4; i++)
	{
		if (*symbol == *(func[i].letter))
			return (func[i].f);
	}

	write(2, "Symbol not found", 17);
	exit(1);
}
