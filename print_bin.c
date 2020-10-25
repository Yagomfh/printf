#include "holberton.h"

int bin_rec(unsigned int b)
{
	int rem, c;

	if (b == 0)
	{
		_putchar('0');
		return(0);
	}
	else
	{
		rem = b % 2;
		b = (b - rem) / 2;
		c = bin_rec(b);
		_putchar(rem);
		return (c);
	}
}
/**
 * print_bin - converts to binary
 * @a: the number to convert
 *
 * Return: lenght of number
 */

int print_bin(va_list a)
{
	unsigned int tmp = va_arg(a, int);
	int len = bin_rec(tmp);

	return (len);
}
