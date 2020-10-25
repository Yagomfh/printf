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
	char *str = NULL;
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
	printf("=====================\n");
	printf("*****STRINGS*****\n");
	printf("=====================\n");
	alen = elen = 0;
	printf("Expected   : %s\n", "holberton");
	_printf("Actual     : %s\n", "holberton");
	printf("Expected   : %s$\n", "");
	_printf("Actual     : %s$\n", "");
	elen = printf("Expected   : %s\n", str);
	alen = _printf("Actual     : %s\n", str);
	elen = printf("%s", "");
	alen = _printf("%s", "");
	printf("Expected   : %i\n", elen);
	printf("Actual     : %i\n", alen);
	printf("Expected   : %sschool\n", "holberton");
	_printf("Actual     : %sschool\n", "holberton");

/**	elen = printf("Expected: %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0); **/
	alen = _printf("Actual  : %c%%%c%%%%%s%c%s%s\n", INT_MAX, INT_MIN, "hello", 0, "holberton", 0);
	printf("Expected: %d\n", elen);
	printf("Actual  : %d\n", alen);
	return (0);
}
