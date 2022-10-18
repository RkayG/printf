#include "main.h"
/**
 * _printf - print a char or a string
 * @format: It's a character string
 * Return: the number of character the function is printing
 */
int _printf(const char *format, ...)
{
	pr_fmt pr_format[] = {
		{"c", char_func},
		{"s", str_func},
		{"%", func_percent},
		{"d", dig_func},
		{"i", dig_func},
		{NULL, NULL}};

	va_list list;
	int count = 0;

	va_start(list, format);
	count =	get_func(format, list, pr_format);
	va_end(list);
	return (count);
}
