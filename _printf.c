#include "main.h"

/**
 * _printf - prints foratted string
 * @format: string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i, charCount;
	va_start(args, format);

	if (format == NULL)
	{
		return (-1);
	}
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c;

				c = (char)va_arg(args, int);
				_putchar(c);
				charCount++;
			}
			else if (format[i] == 's')
			{
				char *s;

				s = va_arg(args, char*);
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					charCount++;
				}
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				int num;

				num = va_arg(args, int);
				if (num < 0)
					_putchar('-');
				_putchar(num);
				charCount++;
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				charCount++;
			}
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
