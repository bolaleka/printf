#include "main.h"
#include <stdio.h>


/**
 * _printf - function reproduce output according to a format
 * @format: constant format
 *
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int c, i, len, id;
	char *s;

	va_start(args, format);
	len = _strlen((char *)format);
	i = 0;

	if (len == 0)
		return (0);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		} else if (format[i] == '%' && format[i + 1] == 'c')
		{
			i++;
			c = va_arg(args, int);
			_putchar(c);
		} else if (format[i] == '%' && format[i + 1] == 's')
		{
			i++;
			s = va_arg(args, char *);
			_puts(s);
		} else if (format[i] == '%' && (format[i + 1] == 'i'
					|| format[i + 1] == 'd'))
		{
			i++;
			id = va_arg(args, int);
			print_number(id);
		}
		i++;
	}
	va_end(args);
	return (0);
}
