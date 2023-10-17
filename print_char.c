#include "main.h"

/**
 * print_char - this function prints a character
 * @args: the characters are picked from vardiac argument
 * if _printf passed a flag
 * Return: character printed number
 */

int print_char(va_list *args)
{
	char c;

	c = va_arg(*args, int);
	return (write(1, &c, 1));
}
