#include "holberton.h"

/**
 * print_char - prints a char
 * @a: index of char to print
 *
 * Return: void
 */

int print_char(va_list a)
{
	int tmp = va_arg(a, int);

	_putchar(tmp);
	return (1);
}
