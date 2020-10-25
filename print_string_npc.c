#include "holberton.h"

/**
 * print_string_npc - print string non printable char
 * @a: a string
 * Return: number of char
 **/

int print_string_npc(va_list a)
{
	char *tmp = va_arg(a, char*);
	int j;

	j = 0;
	while (tmp[j])
	{
		if (tmp[j] < 32 || tmp[j] >= 127)
		{
			_putchar ('\\');
			_putchar ('x');
			_putchar ((tmp[j] / 10) % 10 + '0');
		}
		else
		{
			_putchar(tmp[j]);
		}
		j++;
	}
	return (j);
}
