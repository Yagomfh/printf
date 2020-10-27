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
	int (*f)(va_list a, char flag_c);
} type_d;

int function_call(char c, va_list a, char flag_c);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list a, char flag_c);
int print_string(va_list a, char flag_c);
int print_string_npc(va_list a, char flag_c);
int print_int(va_list a, char flag_c);
int print_bin(va_list a, char flag_c);
int print_unsigned_int(va_list a, char flag_c);
int print_oct(va_list a, char flag_c);
int print_hex(va_list a, char flag_c);
int print_mod(va_list a, char flag_c);
int print_hexm(va_list a, char flag_c);
int print_rev(va_list a, char flag_c);
int print_rot13(va_list a, char flag_c);
int print_pointer(va_list a, char flag_c);
int calc_width(const char *format, unsigned int *i);
int calc_len(const char *format, unsigned int *i);
void *calloc_str(int width, int len);
char flags(char a);
#endif
