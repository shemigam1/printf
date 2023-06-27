#include "main.h"

/**
 * get_format - get function
 * @format: string to be parsed
 * Return: int
 *
 */

int (*get_format(const char *format))(va_list args)
{
	format_t format_arr[] = {
		{"c", format_c},
		{"s", format_s},
		{"d", format_d},
		{"i", format_d},
		{"%", format_percent},
		{NULL, NULL}
	};
	unsigned int i, j = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (format_arr[j].c != NULL)
			{
				if (format[i] == *(format_arr[j].c))
				{
					return (format_arr[j].fun);
				}
				j++;
				/* check for trailing whitespace */
			}
		}
		i++;
	}
	return (NULL);
}
