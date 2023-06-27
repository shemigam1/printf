#include "main.h"

/**
 * _printf - prints foratted string to stdout
 * @format: string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	int charCount, i, r;
	/*format_t format_arr[] = {
		{"c", format_c},
		{"s", format_s},
		{"d", format_d},
		{"i", format_d},
		{"%", format_percent},
		{NULL, NULL}
	};*/

	if (format == NULL)
	{
		return (-1);
	}
	charCount = 0;
	r = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			int (*format_fun)(va_list) = NULL;

			if (format[i + 1] == '\0')
				return (-1);
			format_fun = get_format(&format[i + 1]);
			if (format_fun == NULL)
			{
				_putchar(format[i]);
				charCount++;
			}
			else
			{
				r = format_fun(args);
				if (r == -1)
					return (-1);
				charCount += r;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			charCount++;
		}
		i++;
	}
	va_end(args);
	return (charCount);
}
