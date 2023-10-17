#include "main.h"

/**
 * print_char - this function prints a character
 * @args: variadic arguments to pick the char from
 * if _printf passed a flag
 * Return: character printed number
 */

int print_char(va_list *args)
{
	char k;

	k = _putchar(*args, int);
	return (1);
}
