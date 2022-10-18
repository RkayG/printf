#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

/**
 * struct format - the struct by name pr_fmt
 * @fmt: index by function
 * @func: pointer to function - funtion print
 */

typedef struct pr_fmt
{
	char *fmt;
	int (*func)(va_list list);
} pr_fmt;

int _putchar(char c);
int get_func(const char *format, va_list list, pr_fmt pr_format[]);
int _printf(const char *format, ...);
int str_func(va_list);
int char_func(va_list);
int func_percent(va_list);
int dig_func(va_list);
int func_binary_convert(va_list);
int func_octal_convert(va_list);
int func_hex_Upcase_convert(va_list);
int func_hex_Lowcase_convert(va_list);
int binary_oct_hex_convert(unsigned int, int, int);
int func_unsig_int(va_list list);
int func_stringUppercase(va_list list);
int func_revstr(va_list list);
int func_rot13(va_list);
#endif /* MAIN_H */
