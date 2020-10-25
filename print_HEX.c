#include "holberton.h"

/**
 * putchar_hexm - putchar hex num
 * @b: decimal to conver
 *
 * Return: void
 */

void putchar_hexm(unsigned int b)
{
	int rem;

	if (b == 0)
	{
		return;
	}
	rem = b % 16;
	b = (b - rem) / 16;
	putchar_hexm(b);
	if (rem <= 9)
		_putchar(rem + '0');
	else
		_putchar((rem - 10) + 'A'); 
}

/**
 * print_HEX - converts to hex
 * @a: the number to convert
 *
 * Return: lenght of number
 */

int print_hexm(va_list a)
{
	unsigned int tmp = va_arg(a, int);

	putchar_hexm(tmp);
	return (0);
}
