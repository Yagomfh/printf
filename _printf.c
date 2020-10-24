#include "holberton.h"


int _printf(const char *format, ...)
{
	type_d cases[] = {{"c", print_char},{"s", print_string}};
	unsigned int i, j;
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
					cases[j].f(values);
					i+=2;
				}
			}
		}
		_putchar(format[i]);
	 }
	return (0);
}
