#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <ctype.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

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

int function_call(char c, va_list a);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list a);
int print_string(va_list a);
int print_string_npc(va_list a);
int print_int(va_list a);
int print_bin(va_list a);
int print_unsigned_int(va_list a);
int print_oct(va_list a);
int print_hex(va_list a);
int print_mod(va_list a);
int print_hexm(va_list a);

#endif
