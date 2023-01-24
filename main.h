#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
int _printf(const char *format, ...);
int (*check_specifier(const char *format))(va_list);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int _putchar(char c);
/**
  *struct func - Data type structure for specifier pointers
  * @t: character string
  * @f: function that takes a function pointer
  */
typedef struct func
{
	char *t;
	int (*f)(va_list);
} func_t;
#endif
