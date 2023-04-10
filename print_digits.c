#include "main.h"

/**
 * print_digits - print digits input function
 * @args: argument to pass into va_list
 * @count: args incrmemnt
 *
 * Return: Integer
 */

void print_digits(va_list args, int count)
{
	int num, i;
	char num_str[100];

	num = va_arg(args, int);
	i = 0;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	do {
		num_str[i++] = num % 10 + '0';
		num /= 10;
	} while (num != 0);
	while (i > 0)
	{
		_putchar(num_str[--i]);
		count++;
	}
}
