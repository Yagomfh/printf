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

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; cases[j].type != NULL; j++)
			{
				if (format[i + 1] == *cases[j].type)
				{
					total_p += cases[j].f(values);
					i += 2;
				}
			}
		}
		_putchar(format[i]);
		total_p++;
	}
	va_end(values);
	return (total_p);
}
