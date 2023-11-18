#include "main.h"
/**
 * my_printf - adds plus and # tags
 * @format: The arrangement
 * Return: success
 */

void my_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'd')
		{
			int value = va_arg(args, int);

			if (format[2] == '+')
			{
				if (value >= 0)
				{
					putchar('+');
				}
				else if (format[2] == ' ')
				{
					if (value >= 0)
					{
						putchar(' ');
					}
				}
				else if (format[2] == '#')
				{
					putchar('#');
				}
				printf("%d", value);
				format += 2;
			}
			else
			{
				putchar(*format);
			}
			format++;
		}
		va_end(args);
	}
}

