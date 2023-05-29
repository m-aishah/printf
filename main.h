#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct formatter - A structure that called formatter
 * @letter: conversion specifier (c, s, d, or i)
 * @f: A function pointer to print functions
 */

typedef struct formatter
{
	char *letter;
	void (*f)(va_list list);
} format_me;

int _printf(const char *format, ...);
void (*converter(const char *))(va_list list);
void print_number(int n);
void print_c(va_list list);
void print_s(va_list list);
void print_d(va_list list);
void print_i(va_list list);

#endif
