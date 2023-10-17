#include "main.h"
#include <string.h>
/**
 * reverse_string - reverses the given string
 * @s: the string value that get reversed
 * int_to_string - convert to reversed string from the value of int
 * @num: reverse the num value
 * Return: s
 */

void reverse_string(char *s)
{
	int begin;
	int terminate;
	char temp;
	int num;

	terminate = strlen(s) - 1;
	for (begin = 0; begin < terminate; begin++, terminate--)
	{
		temp = s[begin];
		s[begin] = s[terminate];
		s[terminate] = temp;
	}
}
char *int_to_string(int num)
{
	char *s;
	long n = num;
	int i = 0;

	s = malloc(12);
	if (num < 0)
		n = -n;

	while (n != 0)
	{
		s[i++] = '0' + n % 10;
		n /= 10;
	}
	if (!s)
		return (NULL);
	if (num == 0)
	{
		*s = '0';
		*(s + 1) = '\0';
		return (s);
	}
		if (num < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse_string(s);
	return (s);
}
