#include "holberton.h"

/**
 * calc_width - calc the width flag
 * @format: a string
 * @i: an index
 * Return: an int
 **/

int calc_width(const char *format, unsigned int *i)
{
	int width = 0;
	int j;

	if (format[*i] >= 48 && format[*i] <= 57)
	{
		j = 0;
		for (; (format[*i] >= 48) && (format[*i] <= 57); (*i)++)
		{
			if (width == 0)
			{
				width = (format[*i] - '0');
			}
			else
			{
				width = width * 10 + (format[*i] - '0');
			}
			j++;
		}
	}
	return (width);
}

