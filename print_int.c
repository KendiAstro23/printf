#include <stdio.h>
#include "main.h"
/**
 * print_i - function that prints an integer
 * @args: list of arguments
 *
 * Return: 0 for success
 */
int print_i(va_list args)
{
	int a = va_arg(args, int);
	int num, last = a % 10, digit, exp = 1;
	int  i = 1;

	a = a / 10;
	num = a;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}

/**
 * print_d - function that prints decimal
 * @args: input value
 *
 * Return: decimal
 */

int print_d(va_list args)
{
	int a = va_arg(args, int);
	int num, last = a % 10, digit;
	int  i = 1;
	int exp = 1;

	a = a / 10;
	num = a;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		a = -a;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = a;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
