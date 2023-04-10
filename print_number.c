#include "main.h"

/**
 * print_number - Function that print an integer
 * @n: input integer
 *
 * Return: Integer
 */
int print_number(int num)
{
	int count = 0;
	if (num == 0) 
	{
        	return 1;
    	}
    	if (num < 0) 
	{
        	count++;
        	num = -num;
    	}
    	while (num > 0)
	{
        	count++;
        	num /= 10;
    	}
    	return count;
}
