#include  "holberton.h"

void putchar_bin(unsigned int b)
{
	int rem;

	if (b == 0)
	{
		return;
	}
	rem = b % 2;
	b = (b - rem) / 2;
	putchar_bin(b);
	_putchar(rem + '0');
}

int get_bin(unsigned int c)
{
	if (c == 0)
		return (0);
	return (c % 2 + 10 * get_bin(c / 2));
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
	int bin = get_bin(tmp);
	int len = 0;

	putchar_bin(tmp);
	while (bin)
	{
		bin = bin / 10;
		len++;
	}
	return (len);
}
