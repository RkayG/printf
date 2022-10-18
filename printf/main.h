#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h> 

/**
 * pr_fmt - struct name
 * @fmt: index of function
 * @func: pointer to function
 */

typedef struct pr_fmt
{
	char *fmt;
	int (*func)(va_list list);
}pr_fmt;

int _putchar(char c);
int _printf(const char *format, ...);
int func_percent(va_list list);
int char_func(va_list list);
int str_func(va_list list);
int get_func(const char *format, va_list list, pr_fmt pr_format[]);
int dig_func(va_list list);

#endif /*MAIN_H*/
