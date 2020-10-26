#include "holberton.h"

/**
 * print_mod - prints modulo
 * @a: the input
 * @flag_c: flag char
 * Return: number of modulos
 */

int print_mod(va_list __attribute__((unused))a, char flag_c)
{
	flag_c = '%';
	_putchar(flag_c);
	return (1);
}
