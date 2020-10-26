#include "holberton.h"

/**
 * print_oct - converts to oct
 * @a: the number to convert
 * @flag_c: a char
 * Return: lenght of number
 */

int print_oct(va_list a, char flag_c)
{
	unsigned int tmp = va_arg(a, int);
	int binTable[11];
	int i = 0, j, len = 0;

	while (tmp > 0)
	{
		binTable[i] = tmp % 8;
		tmp = (tmp - tmp % 8) / 8;
		i++;
		len++;
	}
	j = i - 1;
	if (flag_c != '\0')
	{
		_putchar('0');
		len++;
	}
	while (j >= 0)
	{
		_putchar(binTable[j] + '0');
		j--;
	}
	return (len);
}
