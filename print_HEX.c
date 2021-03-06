#include "holberton.h"

/**
 * print_hexm - converts to hex
 * @a: the number to convert
 * @flag_c: a char
 * Return: lenght of number
 **/

int print_hexm(va_list a, char flag_c)
{
	unsigned int tmp = va_arg(a, int);
	int binTable[9];
	int i = 0, j, len = 0, rem;

	if (flag_c == '#')
	{
		_putchar('0');
		_putchar('X');
		len += 2;
	}
	while (tmp > 0)
	{
		rem = tmp % 16;
		tmp = (tmp - rem) / 16;
		if (rem <= 9)
			binTable[i] = '0' + rem;
		else
			binTable[i] = (rem - 10) + 'A';
		i++;
		len++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(binTable[j]);
		j--;
	}
	return (len);
}
