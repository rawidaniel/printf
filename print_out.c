#include "main.h"

/**
 * print_out - print a character
 * @c: hold a character
 * Return: 1
 */
int print_out(char c)
{
	int x;

	x =  write(1, &c, 1);
	return (x);
}
