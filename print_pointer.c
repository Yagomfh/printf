#include "holberton.h"

/**
 * print_pointer - prints pointer value
 * @a: argument passed
 *
 * Return: number of putchars
 */

int print_pointer(va_list a)
{
	char *tmp = va_arg(a, char*);
	int len = 0;

	while (tmp[len])
	{
		len++;
	}
	return (len);
}
