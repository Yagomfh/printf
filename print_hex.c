#include "holberton.h"

/**
 * putchar_bin - putchar bin num
 * @b: decimal to conver
 *
 * Return: void
 */

void putchar_hex(unsigned int b)
{
	int rem;

	if (b == 0)
	{
		return;
	}
	rem = b % 16;
	b = (b - rem) / 16;
	putchar_hex(b);
	if (rem <= 9)
		_putchar(rem + '0');
	else
		_putchar((rem - 10) + 'a'); 
}

/**
 * print_bin - converts to binary
 * @a: the number to convert
 *
 * Return: lenght of number
 */

int print_hex(va_list a)
{
	unsigned int tmp = va_arg(a, int);

	putchar_hex(tmp);
	return (0);
}
