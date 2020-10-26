#include "holberton.h"

/**
 * print_pointer - prints pointer value
 * @a: argument passed
 * @flag_c: flag char
 * Return: number of putchars
 */

int print_pointer(va_list a, char __attribute__((unused))flag_c)
{
	unsigned char *tmp = va_arg(a, void*);
	int len = 0;

	while (tmp[len])
	{
	_putchar(tmp[len]);
	len++;
	}
	return (len);
}
