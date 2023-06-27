#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/* test */
int _putchar(char c);
int _printf(const char *format, ...);

/**
 * struct format - format
 */

typedef struct format
{
	char *c;
	int (*fun)(va_list);
} format_t;

void _puts(char *str);
int _putnum(int n);
int format_c(va_list args);
int format_s(va_list args);
int format_d(va_list args);
int format_percent(va_list args);
int (*get_format(const char *format))(va_list args);
#endif
