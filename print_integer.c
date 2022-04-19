#include "main.h"
/**
 * digit_count- count the number of digits
 * @n: number to evaluate
 * Return: totalnumber of the digit
 */
int digit_count(int n)
{
	unsigned int count = 0;
	unsigned int u;

	if (n < 0)
	{
		u = n * -1;
	}
	else
	{
		u = n;
	}
	while (u >= 9)
	{
		u = u / 10;
		count += 1;
	}
	count += 1;
	return (count);
}

/**
 * print_number - helper function that loop through
 * an integer and print all its digits
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int u;

	if (n < 0)
	{
		print_out('-');
		u = -1 * n;
	}
	else
	{
		u = n;
	}
	if (u / 10)
	{
		print_number(u / 10);
	}
	print_out(u % 10 + '0');
}

/**
 * print_int - print integer
 * @valist: va_list argumnert from _printf function
 * Return: number of character printed
 */
int print_int(va_list valist)
{
	int num;
	unsigned int count;

	num = va_arg(valist, int);
	count = digit_count(num);
	if (num < 0)
		num++;
	print_number(num);
	return (count);
}
