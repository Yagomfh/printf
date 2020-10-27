#include "holberton.h"

/**
 * _printf - copy of the printf function
 * @format: a string
 * Return: number of char
 **/


int _printf(const char *format, ...)
{
	unsigned int i;
	int total_p = 0;
	va_list values;
	char flag;
	int width = 0, len = 0;

	len = width;
	width = len;
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(values, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			total_p += _putchar(format[i]);
		}
		else
		{
			i++;
			flag = flags(format[i]);
			if (flag == '\0')
			{

				width = calc_width(format, &i);
				len = calc_len(format, &i);
				total_p += function_call(format[i], values, flag);
			}
			else
			{
				i++;
				width = calc_width(format, &i);
				len = calc_len(format, &i);
				total_p += function_call(format[i], values, flag);
			}
		}
	}
	va_end(values);
	return (total_p);
}
