#include "main.h"

/**
 * str_func - print a string
 * @list: the list of arguments the function _printf is receiving
 * Return: the number of characteres of the string
 */
int str_func(va_list list)
{
	int i;
	char *ptr;

	ptr = (va_arg(list, char *));

	if (ptr == 0)
	ptr = "(null)";

	for (i = 0; ptr[i] != 0; i++)
		_putchar(ptr[i]);
	return (i);
}

/**
 * char_func - print a char, or nothing if it is not
 * @list: the list of arguments the funcion id receiving
 * Return: 1 if it is a char, 0 otherwise
 */
int char_func(va_list list)
{
	char c;

	c = (va_arg(list, int));
	_putchar(c);
	return (1);
}

/**
 * func_percent - print the sing percent
 * @list: the list of arguments the funcion id receiving
 * Return: 1 as just one of character
 */
int func_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}
