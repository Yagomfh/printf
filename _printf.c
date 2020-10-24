#include "holberton.h"


int _printf(const char *format, ...)
{
	type_d cases[] = {{"c", print_char},{"s", print_string}};
	unsigned int i, j;
	va_list values;

	va_start(values, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i - 1] == '%' && format[i - 2] != '\\')
		{
			for (j = 0; cases[j].type != NULL; j++)
			{
				cases[j].f(values);
			}
		}
		_putchar(format[i]);
	 }
}
