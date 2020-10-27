#include "holberton.h"
/**
 * _strlen - the length of a string
 * @s: the string
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		s++;
	}
	return (result);
}

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
	int i, j, len;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rotate = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	len = _strlen(s);
	tmp = malloc(sizeof(char) * len);
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
