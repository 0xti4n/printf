#include "holberton.h"
#include <stdlib.h>

/**
* _printf - Function construction that performs the same as printf in C
*
* @format: string for analyze
* Return: Integer
*/

int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, len = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '%')
			{
				_putchar(format[i]);
					len++;
			}

			if (format[i] == 'c' || format[i] == 's')
			{
				len = len + (*new_fun(&format[i]))(list);
			}
			else if (format[i] != '%')
			{
				_putchar('%');
				_putchar(format[i]);
				len = len + 2;
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
		i++;
	}
	va_end(list);
	return (len);
}
