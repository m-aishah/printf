#include "main.h"

/**
 * _printf - A function like printf
 * @format: character string containing directives on how to print
 * Return: the number of characters printed
 *		(excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i, ret = 0;

	va_start(args, format);

	for (i = 0; *(format + i); i++)
	{
		if (*(format + i) == '%')
		{
			i++;

			if (*(format + i) != '%')
			{
				converter(format + i)(args);
				continue;
			}
		}

		write(1, (format + i), 1);
		ret++;
	}

	return (ret);
}
