#include "holberton.h"

int print_string(va_list a)
{
	char *tmp = va_arg(a, char*);
	int i;

	i = 0;
	while (tmp[i])
	{
		_putchar(tmp[i]);
		i++;
	}
	printf("\nprint_string DONE");
	return (i);
}
