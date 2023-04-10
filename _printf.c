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
	unsigned int count;

	va_start(args, format);
	count = 0;
	while (*format)
	{
		if (*format == '%') 
		{
			format++;
			if (*format == 'i' || *format == 'd')
			{
				print_digits(args, count);
			} else if (*format == 'c')
			{
				count = print_char(args, count);
			} else if(*format == 's')
			{
				count = print_str(args, count);
			}else 
				_putchar('%');
		} else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
