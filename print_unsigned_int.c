#include "holberton.h"

/**
 * print_unsigned_int - print positive int
 * @b: an unsigned int
 * @flag_c: flag char
 * Return: number of digits
 **/

int print_unsigned_int(va_list b, char __attribute__((unused))flag_c)
{
	unsigned int n = va_arg(b, unsigned int);
	unsigned int j, len, tmp, i;

	j = 0;
	len = 0;
	if (!n)
	{
		_putchar('0');
		return (1);
	}
	tmp = n;
	i = n;
	while (tmp)
	{
		tmp = tmp / 10;
		len++;
	}
	tmp = 1;
	for (j = 1; j < len; j++)
	{
		tmp = tmp * 10;
	}
	for (j = 0; j < len; j++)
	{
		_putchar((i / tmp % 10) + '0');
		tmp = tmp / 10;
	}
	return (len);
}
