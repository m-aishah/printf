#include "main.h"

/**
 * convert - Function pointer that matches conversion specifier,
 *		to its correspnding function
 * @symbol: conversion specifier symbol to be matched
 *
 * Return: void
 */

void (*convert(const char *symbol))(va_list list)
{
	formatter1 func[] = {
		{"c", print_c},
		{"s", print_s},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	int i, max;

	i = 0, max = sizeof(func) / sizeof(func[0]);

	for (; i < max ; ++i)
	{
		if (*symbol == *(func[i].letter))
			return (func[i].f);
	}
	/*
	switch (symbol) {
		case 'c':
			print_c(list);
			break;
		case 's':
			print_s(list);;
			break;
		case 'd':
			print_d(list);;
			break;
		case 'i':
			print_i(list);;
			break;
	}
	*/
	write(2, "conversion specifier lacks type at end of format", 48);
	exit(1);
}
