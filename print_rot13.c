#include "holberton.h"

/**
 * print_rot13 - print string in rot13
 * @a: a string
 * @flag_c: flag char
 * Return: lentgh of the string
 **/

int print_rot13(va_list a, char __attribute__((unused))flag_c)
{
	char *s = va_arg(a, char*);
	char *tmp;
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rotate = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
			tmp = malloc(sizeof(char) * i);
	if (tmp == NULL)
		return (0);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				tmp[i] = rotate[j];
				break;
			}
			else
				tmp[i] = s[i];
		}
	}
	for (i = 0; tmp[i] != '\0'; i++)
	{
		_putchar(tmp[i]);
	}
	free(tmp);
	return (i);
}
