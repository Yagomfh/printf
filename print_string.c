#include "holberton.h"

/**
 * print_string - print a string
 * @a: a string
 * Return: number of char
 **/

int print_string(va_list a)
{
	char *tmp;
	int j;

	tmp = va_arg(a, char*);
	j = 0;
	while (tmp[j])
	{
		_putchar(tmp[j]);
		j++;
	}
	return (j);
}
