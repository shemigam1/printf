#include "main.h"
/**
 * _printf_junction - Acts as a parser
 * @format: array of input
 * format_arr: array of specifiers
 * @args: variadic name
 * Description: An acting parser function
 * Return: charCount
 */
int _printf_junction(const char *format, format_t format_arr[], va_list args)
{
	int charCount = 0, i = 0, r = 0, j;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
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
					return (-1);
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
	return (charCount);
}
