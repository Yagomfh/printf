#include "holberton.h"

/**
 * print_string - print a string
 * @a: a string
 * @flag_c: flag char
 * Return: number of char
 **/

int print_string(va_list a, char __attribute__((unused)) flag_c)
{
	char *tmp;
	int j;

	tmp = va_arg(a, char*);
	j = 0;
	if (tmp == NULL)
	{
		tmp = "(null)";
	}
	while (tmp[j])
	{
		_putchar(tmp[j]);
		j++;
	}
	return (j);
}
