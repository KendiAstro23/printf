#include <stdio.h>
#include "main.h"

/**
 * print_c - function that prints char strings
 * @val: the value
 *
 * Return: value.
 */
int print_c(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}
