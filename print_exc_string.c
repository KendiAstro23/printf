#include <stdio.h>
#include "main.h"
/**
 * print_exc_string - function that converts to  exclusive strings.
 * @val: value inserted
 *
 * Return: value
 */

int print_exc_string(va_list val)
{
	char *s;
	int a, length = 0;
	int value;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] < 32 || s[a] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = s[a];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			_putchar(s[a]);
			length++;
		}
	}
	return (length);
}

