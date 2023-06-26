#include "main.h"

/**
 * _printf - prints foratted string
 * @format: string
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;
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
				int c;

				c = va_arg(args, int);
				_putchar(c);
				i++;
			}
			else if (format[i] == 's')
			{
				char *s;

				s = va_arg(args, char*);
				if (s == NULL)
					_puts("nil");
				_puts(s);
				i++;
			}
		}
		_putchar(format[i]);
		i++;
	}
	return (i);
}
