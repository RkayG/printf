#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf -produces output according to a format
 * @format: format specifier
 * @...: variadic arguments
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	char *str;
	const char *ptr;
	int i = 0, c;

	va_list list;

	va_start(list, format);
	for (ptr = format; *ptr; ptr++)
	{
		if (*ptr != '%')
		{
			_putchar(*ptr);
			continue;
		}
		switch (*ptr++)
		{
			case 's':
				for (str = va_arg(list, char*); str[i] != '\0'; i++)
					_putchar(str[i]);
				break;
			case 'c':
				c = va_arg(list, int);
				_putchar(c);
				i = 1;
				break;
			default:
				_putchar(*ptr);
				break;
		}
	}
	if (format == NULL)
		return (-1);

	va_end(list);
	return (i);
}
