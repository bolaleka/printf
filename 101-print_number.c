#include "main.h"

/**
 * print_number - Function that print an integer
 * @n: input integer
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	num = (unsigned int)n;
	if (num / 10)
		print_number(num / 10);
	_putchar(num % 10 + '0');
}

