#include "holberton.h"


int _printf(const char *format, ...)
{
	type_d cases[] = {{"c", print_char},{"s", print_string}};
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
					i+=2;
				}
			}
		}
		_putchar(format[i]);
		total_p++;
	 }
	return (total_p);
}
