#include "main.h"

/**
 * print_binary - print a number in base 2
 * @valist: va_list argument from _printf() function
 * Return: the number of character printed
 */
int print_binary(va_list valist)
{
	unsigned int num;
	char *str;

	num = va_arg(valist, unsigned int);
	str = itoa(num, 2, 0);
	return (_puts(str));
}
