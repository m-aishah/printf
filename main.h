#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _printf(const char *format, ...);

typedef struct formatter
{
	char *symbol;
	void (*f)(char *);
} formatter1;

void (*converter(char *))(va_list list);
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);
#endif
