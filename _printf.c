#include "main.h"

/**
 * _printf - prints foratted string to stdout
 * @format: string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	int charCount, i, r, j;
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
	charCount = 0;
	r = 0;
	i = 0;
	j = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			/*int (*format_fun)(va_list) = NULL;*/

			while (format_arr[j].c)
			{
				if (format[i + 1] == format_arr[j].c[0])
				{
					r = format_arr[j].fun(args);
					if (r == -1)
						return (-1);
					charCount += r;
					break;
				}
				j++;
			}
			if (!format_arr[j].c && format[i + 1] != ' ')
			{
				if (format[i + 1])
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					charCount += 2;
				}
				else
				{
					return (-1);
				}
			}

			/*if (format[i + 1] == '\0')
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
			}*/
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
