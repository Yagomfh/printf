#include "holberton.h"

/**
 * flags - handles flags
 * @a: char to scan
 * Return: a flag
 */

char flags(char a)
{
	char all_flags[] = {'+', ' ', '#'};
	int i = 0;

	while (all_flags[i])
	{
		if (all_flags[i] == a)
			return (all_flags[i]);
		i++;
	}
	return ('\0');
}
