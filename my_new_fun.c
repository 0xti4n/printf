#include "holberton.h"

/**
* new_fun - struct function selects the case
* @format: brings the array first position
* @list: brings the arguments to evaluate
*
* Return: integer value.
*/

int (*new_fun(const char *format))(va_list list)
{
	my_struct array[] = {
		{"c", _printf_char},
		{"s", _printf_str},
		{NULL, NULL}
	};

	int i = 0;

	while (array[i].c != NULL)
	{
		if (*(array[i].c) == *format)
		{
			return (array[i].f);
		}
		i++;
	}
	return (0);
}
