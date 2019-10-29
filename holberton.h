#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct cases
{
	char *c;
	int (*f)(va_list);
} my_struct;

int _putchar(char c);
int _printf(const char *format, ...);
int _printf_char(va_list list);
int _printf_str(va_list list);
int (*new_fun(const char *format))(va_list list);

#endif
