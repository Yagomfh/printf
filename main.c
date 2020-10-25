#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	int alen, elen;
	char c = 'z';
/*	void *addr;
*/
	len = 120000;
	len2 = 4;
	ui = (unsigned int)INT_MAX + 1024;

	printf("=====================\n");
	printf("*****CHAR*****\n");
	printf("=====================\n");
	printf("Expected   : %c\n", 'a');
	_printf("Actual     : %c\n", 'a');
	elen = printf("Expected   : %c\n", c);
	alen = _printf("Actual     : %c\n", c);
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %cc\n", 'a');
	_printf("Actual     : %cc\n", 'a');
	printf("Expected   : %c\n", 53);
	_printf("Actual     : %c\n", 53);
	printf("Expected   : %c.\n", '\0');
	_printf("Actual     : %c.\n", '\0');
	printf("Expected   : %%%%%c\n", 'y');
	_printf("Actual     : %%%%%c\n", 'y');
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
/**	ui = (unsigned int)INT_MAX + 1024;**/
	_printf("Length:[%d, %i]\n", len, len2);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -2147);
/**	_printf("%b\n", 98); **/
	printf("Negative:[%d]\n", -2648);
	_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x]\n", ui);
	printf("Unsigned hexadecimal:[%x]\n", ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
/**	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n"); **/
	_printf("[%S]\n", "Holberton\nSchool");
	return (0);
}
