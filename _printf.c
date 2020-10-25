#include "holberton.h"

/**
 * _printf - copy of the printf function
 * @format: a string
 * Return: number of char
 **/

int _printf(const char *format, ...)
{
	type_d cases[] = {
		{"c", print_char}, {"s", print_string},
		{"S", print_string_npc}, {"d", print_int},
		{"i", print_int}, {"u", print_unsigned_int},
		{"b", print_bin}, {"o", print_oct},
		{"x", print_hex},
		{NULL, NULL}};
	unsigned int i, j;
	int total_p = 0;
	va_list values;

	va_start(values, format);

	i = 0;
	while (format && format[i])
	{
		while (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i += 2;
		}
		if (format[i] == '%' && format[i + 1] != '%')
		{
			j = 0;
			while (cases[j].type)
			{
				total_p += cases[j].f(values);
				i += 2;
				j++;
			}
		}
		_putchar(format[i]);
		total_p++;
		i++;
	}
	va_end(values);
	return (total_p);
}
