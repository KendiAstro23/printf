#include "main.h"
/**
 * my_printf - performs an operation
 * @format: arrangement
 * @...: other specifiers
 * Return: success
 */
void my_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	while (*format)
		if (*format == '%' && (*(format + 1) == 'l' || *(format + 1) == 'h'))
			char length_modifier = *(format + 1);
			int value;

			if (length_modifier == 'l')
				value = va_arg(args, long);
			else if (length_modifier == 'h')
				value = va_arg(args, int);
			switch (*(format + 2))
			{
				case 'd':
				case 'i':
					printf("%d", value);
					break;
				case 'u':
					printf("%u", value);
					break;
				case 'o':
					printf("%o", value);
					break;
				case 'x':
					printf("%x", value);
					break;
				case 'X':
					printf("%X", value);
					break;
				default:
					putchar('%');
					break;
			}
			format += 2;
		else
			putchar(*format);
		format++;
	va_end(args);
}

