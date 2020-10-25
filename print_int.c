#include "holberton.h"

/**
 * print_int - print an integer
 * @a: an integer
 * Return: number of digit
 **/

int print_int(va_list a)
{
	int b = va_arg(a, int);
	unsigned int n;
	int len, i;
	int *tab;

	n = b;

	if (b < 0)
	{
		n = -b;
		putchar('-');
	}

	for (len = 0; n != 0; n = n / 10)
	{
		len++;
	}
	tab = malloc(len * sizeof(int));
	n = b;
	if (b < 0)
	{
		n = -b;
	}

	for (i = 0; n != 0; n = n / 10)
	{
		tab[i] = n % 10;
		i++;
	}

	for (i = (len - 1); i >= 0; i--)
	{
		putchar(tab[i] + '0');
	}
	putchar('\n');

	return (len);
}

