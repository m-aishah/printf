#include "main.h"

/**
 * _printf - A function that works similar to  printf (in stdio.h library)
 * @format: character string containing directives on how to print
 * Return: the number of characters printed
 *		(excluding the null byte used to end output to strings
 */
int _printf(const char *format, ...)
{
	int i;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%s)
		{
			i++;
			convert(format + i)(args);
		}
		else
		{
			write(1, format + i, 1);
		}
	}

	return (i);
}
