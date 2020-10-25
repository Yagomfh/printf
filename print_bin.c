#include  "holberton.h"

int print_bin(va_list a)
{
	unsigned int tmp = va_arg(a, int);
	int binTable[32];
	int i = 0, j, len = 0;

	while (tmp > 0)
	{
		binTable[i] = tmp % 2;
		tmp = (tmp - tmp % 2) / 2;
		i++;
		len++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(binTable[j] + '0');
		j--;
	}
	return (len);
}
