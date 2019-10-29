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

int _printf_str(va_list list)
{
	char *st;

	st = va_arg(list, char *);

	int i = 0, len = 0;

	if (st == NULL)
	{
		st = "(null)";
	}

	while (st[i] != '\0')
	{
		_putchar(st[i]);
		i++;
		len++;
	}
	return(len);
}
