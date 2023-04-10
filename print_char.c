#include "main.h"

/**
 * print_char - print charracter function
 * @args: argument to pass into va_list
 * @count: increment input args
 * @format: the input specifier
 * Return: void
 */

int print_char(va_list args, int count)
{
	unsigned char c;
	c = va_arg(args, int);
	_putchar(c);
	count++;
	return (count);
}
