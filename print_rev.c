#include "holberton.h"

/**
 * print_rev - print in reverse
 * @a: a string
 * @flag_c: flag char
 * Return: length of the string
 **/

int print_rev(va_list a, char __attribute__((unused))flag_c)
{
	char *tmp = va_arg(a, char*);
	char *tab;
	int i, len = 0;

	for (i = 0; tmp[i] != '\0'; i++)
	{
		len++;
	}

	tab = malloc(sizeof(char) * len);

	for (i = 0; i < len; i++)
	{
		tab[i] = tmp[i];
	}

	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(tab[i]);
	}
	return (len);
}
