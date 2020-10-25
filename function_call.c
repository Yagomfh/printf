#include "holberton.h"

/**
 * function_call - calls a fucntion depending on char
 * @c: char to analyse
 * @a: argument to pass
 *
 * Return: # of putchars
 */

int function_call(char c, va_list a)
{
	type_d cases[] = {
		{"c", print_char}, {"s", print_string},
		{"S", print_string_npc}, {"d", print_int},
		{"i", print_int}, {"u", print_unsigned_int},
		{"b", print_bin}, {"o", print_oct},
		{"x", print_hex}, {"%", print_mod},
		{NULL, NULL}};
	int i = 0;

	while (cases[i].type)
	{
		if (c == *(cases[i].type))
			return (cases[i].f(a));
		i++;
	}
	return (0);
}
