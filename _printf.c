#include "main.h"

/**
 * _printf - prints foratted string to stdout
 * @format: string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	int charCount;
	format_t format_arr[] = {
		{"c", format_c},
		{"s", format_s},
		{"d", format_d},
		{"i", format_d},
		{"%", format_percent},
		{NULL, NULL}
	};

	if (format == NULL)
	{
		return (-1);
	}
	va_start(args, format);

	charCount = _printf_junction(format, format_arr, args);

	va_end(args);
	return (charCount);
}
