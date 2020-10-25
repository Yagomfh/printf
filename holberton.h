#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct form - type struct
 * @type: letter type
 * @f: fuction to call
 *
 * Description: fuction to call depending on char call
 */

typedef struct form
{
	char *type;
	int (*f)(va_list a);
} type_d;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list a);
int print_string(va_list a);
int print_int(va_list a);
int print_bin(va_list a);
int print_unsigned_int(va_list a);
#endif
