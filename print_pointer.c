#include "holberton.h"

/**
 * print_hexa - converts to hexadecimal
 * @a: the number to convert
 * Return: lenght of number
 **/

int print_hexa(unsigned long int a)
{
	int binTable[9];
	int i = 0, j, len = 0, rem;

	_putchar('0');
	_putchar('x');
	len += 2;
	while (a > 0)
	{
		rem = a % 16;
		a = (a - rem) / 16;
		if (rem <= 9)
			binTable[i] = '0' + rem;
		else
			binTable[i] = (rem - 10) + 'a';
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

/**
 * print_pointer - prints pointer value
 * @a: argument passed
 * @flag_c: flag char
 * Return: number of putchars
 */

int print_pointer(va_list a, char __attribute__((unused))flag_c)
{
	unsigned long int tmp = va_arg(a, unsigned long int);

	return (print_hexa(tmp));
}
