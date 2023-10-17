#include "main.h"
/**
 * print_int - print an integer value and returns -1
 * @args: pick a digit from variadic list
 * Return: -1 or the num length
 */

int print_string(va_list *args)
{
	char *s;

	s = va_arg(*args, char *);

	if (!s)
		s = "(null)";
	return (1);
}
