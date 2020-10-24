#include "holberton.h"

void print_string(va_list a)
{
	char *tmp = va_arg(a, char*);
	_putchar(tmp[1]);
}
