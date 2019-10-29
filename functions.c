#include "holberton.h"

/**
 * _printf_char - Used with c case
 * @list: Brings arguments
 * Return: Integer value
 */

int _printf_char(va_list list)
{
	int c = va_arg(list, int);

	_putchar(c);
	return (1);
}

/**
 * _printf_str - Used in s case
 * @list: Brings arguments
 * Return: integer value
 */

int _prinf_str(va_list list)
{

}
