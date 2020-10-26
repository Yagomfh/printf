#include  "holberton.h"

/**
 * print_bin - print in binary
 * @a: a int
 * @flag_c: flag char
 * Return: length
 **/

int print_bin(va_list a, char __attribute__((unused))flag_c)
{
	int tmp = va_arg(a, int);
	int binTable[33];
	int i, j, len = 0;

	i = 0;
	if (tmp < 0)
	{
		_putchar('%');
		_putchar('b');
		return (32);
	}
	else
	{
		while (tmp > 0)
		{
			binTable[i] = tmp % 2;
			tmp = (tmp - tmp % 2) / 2;
			i++;
			len++;
		}
		for (j = i - 1; j >= 0; j--)
			_putchar(binTable[j] + '0');
	}
	return (len);
}
