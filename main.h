#ifndef PRINTF_H
#define PRINTF_H



#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int print_format(const char *format,va_list valist);
int formatchecker(const char *str,va_list valist , int *j);
int print_out(char c);
int _printf(const char *format, ...);
int print_char(va_list valist);
int print_string(va_list valist);

/**
 * struct format - a struct of format
 * @l: format checker
 * @ptr:  a pointer function
 */

typedef struct format
{
	char l;
	int (*ptr)(va_list);
} Data;

#endif
