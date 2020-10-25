#include "holberton.h"

/**
 * print_string_npc - print string non printable char
 * @a: a string
 * Return: number of char
 **/

int print_string_npc(va_list a)
{
	char *tmp = va_arg(a, char*);
	int j/**temp**/;
	char *null = "(null)";

	j = 0;
	if (tmp != NULL)
	{
		while (tmp[j])
		{
			if (tmp[j] < 32 || tmp[j] >= 127)
			{
			}
			else
			{
				_putchar(tmp[j]);
			}
			j++;
		}
	}
	else
	{
		for (j = 0; null[j] != '\0'; j++)
		{
			_putchar(null[j]);
		}
	}
	return (j);

}
