#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/* format checker*/
int print_format(const char *format, va_list valist);
int formatchecker(const char *str, va_list valist, int *j);
/*print the output to stdout*/
int print_out(char c);
/*print anything*/
int _printf(const char *format, ...);
/*print a character and string*/
int print_char(va_list valist);
int print_string(va_list valist);
/* print integer */
int print_int(va_list valist);
char *itoa(long int num, int base, int lowercase);
/* print base*/
int print_binary(va_list valist);
/* print string */
int _puts(char *str);
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
