#include "holberton.h"

/**
 * equal127 - char equal to del 127
 * Return: none
 **/

void equal127(void)
{
	_putchar('\\');
	_putchar('x');
	_putchar('7');
	_putchar('F');
}

/**
 * print_string_npc - print string non printable char
 * @a: a string
 * Return: number of char
 **/

int print_string_npc(va_list a)
{
	char *tmp = va_arg(a, char*);
	char s;
	int j = 0, len = 0;

	while (tmp[j])
	{
		if (tmp[j] < 32)
		{
			s = tmp[j];
			_putchar('\\');
			if (s < 10)
			{
				s = s + 48;
				_putchar('x');
				_putchar('0');
			}
			else
			{
				s = s + 55;
				_putchar('x');
				_putchar('1');
			}
			_putchar(s);
			len += 4;
		}
		else if (tmp[j] == 127)
		{
			equal127();
			len += 4;
		}
		else
		{
			_putchar(tmp[j]);
			len++;
		}
		j++;
	}
	return (len);
}
