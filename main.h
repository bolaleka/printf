#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(int c);
int print_char(va_list args, int count);
int print_str(va_list args, int count);
int print_number(int n);
void print_digits(va_list args, int count);

#endif
