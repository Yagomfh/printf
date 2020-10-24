#include "holberton.h"

int print_int(va_list a)
{
	int tmp = va_arg(a, int);
	unsigned int j, len, n, i;

	j = 0;
	len = 0;
	if (!tmp)
	{
		_putchar('0');
		return;
	}
	n = tmp;
	i = n;
	if (n < 0)
	{
		_putchar('-');
		tmp = -n;
		i = -n;
	}
	while (tmp)
	{
		tmp = tmp / 10;
		len++;
	}
	tmp = 1;
	for (j = 1; j < len; j++)
	{
		tmp = tmp * 10;
	}
	for (j = 0; j < len; j++)
	{
		_putchar((i / tmp % 10) + '0');
		tmp = tmp / 10;
	}

}
