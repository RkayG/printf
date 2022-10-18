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
	pr_fmt pr_format[] = {
		{"c", char_func},
		{"s", str_func},
		{"%", func_percent},
		{NULL, NULL},
	};
	va_list list;
	int count = 0;

	va_start(list, format);
	count = get_func(format, list, pr_format);
	va_end(list);
	return (count);
}
