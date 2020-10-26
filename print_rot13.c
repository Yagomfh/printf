#include "holberton.h"

/**
 * print_rot13 - print string in rot13
 * @a: a string
 * Return: lentgh of the string
 **/

int print_rot13(va_list a)
{
	char *s = va_arg(a, char*);
	char *tmp;
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rotate = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	tmp = malloc(sizeof(char) * i);
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				tmp[i] = rotate[j];
				break;
			}
		}
	}
	for (i = 0; tmp[i] != '\0'; i++)
	{
		_putchar(tmp[i]);
	}
	return (i);
}
