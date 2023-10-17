#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int print_char(va_list *args);
int print_int(va_list *args);
char *int_to_string(int num);
int print_string(va_list *args);

#endif /* _MAIN_H_ */

