#include "holberton.h"

/**
 * numlen - length of a number
 * @n: a number
 * Return: return len of the num
 **/

int numlen(unsigned int n)
{
	int len;

	for (len = 0; n != 0; n = n / 10)
	{
		len++;
	}
	return (len);
}


/**
 * negtopos - absolute value of a neg num
 * @n: a number
 * Return: the positive value of b
 **/

int negtopos(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}

/**
 * print_int - print an integer
 * @a: an integer
 * @flag_c: a cha: a char
 * Return: number of digit
 **/

int print_int(va_list a, char flag_c)
{
	unsigned int n;
	int len, i;
	int *tab;

	int b = va_arg(a, int);
	if (b >= 0 && flag_c != '\0')
		_putchar(flag_c);
	if (!b)
	{
		_putchar('0');
		return (1);
	}
	n = b;
	if (b < 0)
		_putchar('-');
	n = negtopos(n);
	len = numlen(n);
	tab = malloc(len * sizeof(int));
	if (!tab)
		return (0);
	n = b;
	n = negtopos(n);
	for (i = 0; n != 0; n = n / 10)
	{
		tab[i] = n % 10;
		i++;
	}
	for (i = (len - 1); i >= 0; i--)
		_putchar(tab[i] + '0');
	if (b < 0)
		len = len + 1;
	if (flag_c != '\0')
		len++;
	free(tab);
	return (len);
}
