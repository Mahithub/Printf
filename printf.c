#include "main.h"

/**
 * handle_specifiers - handles character
 * @format: is a character string composed of zero or more directives
 * @args: variadic argument function
 * Return: int
 */

int handle_specifiers(const char **format, va_list *args)
{
	int c;

	switch (*(++(*format)))
	{
		case '%':
			c = print(1, "%", 1);
			break;
case 'c':
			c = print_char(args);
			break;
		case 's':
			c = print_string(args);
			break;
		case ' ':
			c = -1;
			break;
		case 'i':
		case '\0':
			c = -1;
			break;
		case 'd':
			c = print_int(args);
			break;
		default:
			--(*format);
			c = write(1, *format, 1);
			break;
	}
	return (c);
}

/**
 * _printf - printf standard mimics
 * @format: string for specifying format
 *
 * Return:print character number or on failure -1
 */

int _printf(const char *format, ...)
{
	int b;
Int add = 0;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			b = handle_specifiers(&format, &args);
			if (b == -1)
				return (b);
			add += b;
			format++;
		}
		else
		{
			b = write(1, format, 1);
			if (b == -1)
				return (b);
			add++;
			format++;
		}
	}
	va_end(args);
	return (add);
}
