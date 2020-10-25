#include "holberton.h"

/**
 * print_string_npc - print string non printable char
 * @a: a string
 * Return: number of char
 **/

int print_string_npc(va_list a)
{
	char *tmp = va_arg(a, char*);
	char s;
	int j;

	j = 0;
	while (tmp[j])
	{
		if (tmp[j] < 32 || tmp[j] >= 127)
		{
			s = tmp[j];
			if (s < 10)
			{
				s = s + 48;
			}
			else
			{
				s = s + 55;
			}
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			_putchar(s);
		}
		else
		{
			_putchar(tmp[j]);
		}
		j++;
	}
	return (j);
}
