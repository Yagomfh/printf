#include "holberton.h"

/**
 * print_char - prints a char
 * @a: index of char to print
 * @flag_c: flag char
 * Return: void
 */

int print_char(va_list a, char __attribute__((unused)) flag_c)
{
	int tmp = va_arg(a, int);

	_putchar(tmp);
	return (1);
}
