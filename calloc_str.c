#include "holberton.h"

/**
 * *calloc_str - malloc the size of the string
 * @width: minimum size
 * @len: max size
 * Return: a pointer
 **/

void *calloc_str(int width, int len)
{
	int j;
	int i = width + 1;
	void *string;

	if (len > width)
	{
		i = len + 1;
	}

	string = malloc(sizeof(char) * i);

	for (j = 0; j < i; j++)
	{
		((char *)string)[j] = '0';
	}

	return (string);
}
