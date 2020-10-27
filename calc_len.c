#include "holberton.h"

/**
 * calc_len - calcul len max
 * @format: a string
 * @i: an index
 * Return: an int the len flag
 **/

int calc_len(const char *format, unsigned int *i)
{
	int len = 0;
	int j;

	if (format[*i] == '.')
	{
		(*i)++;
		if (format[*i] >= 48 && format[*i] <= 57)
		{
			j = 0;
			for (; (format[*i] >= 48) && (format[*i] <= 57); (*i)++)
			{
				if (len == 0)
				{
					len = (format[*i] - '0');
				}
				else
				{
					len = len * 10 + (format[*i] - '0');
				}
				j++;
			}
		}
	}
	return (len);
}
