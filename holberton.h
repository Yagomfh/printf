#ifndef HOLBERTON_H
#define HOLBERTON_H
typedef struct form
{
	char *type;
	(*f)(va_list a);
}
int _printf(const char *format, ...);
#endif
