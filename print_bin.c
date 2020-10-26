#include  "holberton.h"

/**
 * print_bin - print in binary
 * @a: a int
 * Return: length
 **/

int print_bin(va_list a)
{
	unsigned int tmp = va_arg(a, int);
	int *binTable;
	int i = 0, j, len = 0;

	binTable = malloc(32 +  + 1);
	if (!binTable)
		return (0);
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
