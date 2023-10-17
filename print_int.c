#include "main.h"
#include <string.h>
/**
 * print_int - print an integer value and returns -1
 * @args: pick a digit from variadic list
 * Return: -1 or the num length
 */

int print_int(va_list *args)
{
	int num;
	int result;
	char *buffer;

	num = va_arg(*args, int);

	buffer = int_to_string(num);
	if (!buffer)
		return (-1);

	result = write(1, buffer, strlen(buffer));

	free(buffer);

	return (result);
}


