#include "holberton.h"
#include <stdlib.h>

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
	int i = 0, len = 0;

	st = va_arg(list, char *);

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
	return (len);
}

/**
* putnum - Convert numbers.
* @n: The number to evaluate.
* @base: The base number.
* @numbers: Numbers to evaluate.
* Return: The result.
*/

int putnum(unsigned int n, unsigned int base, char *numbers)
{
	int r = 1;

	if (n >= base)
		r += putnum(n / base, base, numbers);
	_putchar(numbers[n % base]);
	return (r);
}

/**
* _printf_number - Function that prints numbers.
* @list: Brings arguments.
* Return: The len of the numbers.
*/

int _printf_number(va_list list)
{
	int n = va_arg(list, int);
	int len = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		len++;
		num = n * -1;
	}
	else
	{
		num = n;
	}
	len += putnum(num, 10, "0123456789");
	return (len);
}
