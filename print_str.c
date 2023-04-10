#include "main.h"

/**
 * print_str - print string input function
 * @args: argument to pass into va_list
 * @count: increment the string
 * 
 * Return: void
 */

void print_str(va_list args, int count)
{
	char *s;

	s = va_arg(args, char *);
	while(*s != '\0')
	{
		_putchar(*s++);
		count++;
	}
}
