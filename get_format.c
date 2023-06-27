#include "main.h"

/**
 * get_format - get function
 * @format: string to be parsed
 * Return: int
 *
 */

int (*get_function(const char *format))(va_list arg)
{
	format_t format_arr[] = {
		{"c", format_c},
		{"s", format_s},
		{"d", format_d},
		{"i", format_d},
		{"%", format_percent},
		{NULL, NULL}
	};
	unsigned int i, j, charCount;

	i, j, charCount = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; format_arr[j].c != NULL; j++)
			{
				if (format[i] == *(format_arr[j].c))
				{
					int r;

					r = format_arr[j].fun;
					if (r == -1)
						return (-1);
					charCount += r;
					break;
				}
				/* check for trailing whitespace */
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
