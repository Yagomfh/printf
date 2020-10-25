#include "holberton.h"

/**
 * putchar_oct - putchar oct num
 * @b: decimal to conver
 *
 * Return: void
 */

void putchar_oct(unsigned int b)
{
	int rem;

	if (b == 0)
	{
		return;
	}
	rem = b % 8;
	b = (b - rem) / 8;
	putchar_oct(b);
	_putchar(rem + '0');
}

/**
 * get_oct - convs dec in oct
 * @c: decimal to convert
 *
 * Return: the oct num
 */

int get_oct(unsigned int c)
{
	if (c == 0)
		return (0);
	return (c % 8 + 10 * get_oct(c / 8));
}

/**
 * print_oct - converts to oct
 * @a: the number to convert
 *
 * Return: lenght of number
 */

int print_oct(va_list a)
{
	unsigned int tmp = va_arg(a, int);
	int bin = get_oct(tmp);
	int len = 0;

	putchar_oct(tmp);
	while (bin)
	{
		bin = bin / 10;
		len++;
	}
	return (len);
}
