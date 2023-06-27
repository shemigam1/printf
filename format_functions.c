#include "main.h"

/**
 * format_c - format for %c
 * 
 * @Return: 0
 */

int format_c(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	_putchar(c);
	return (1);
}

/**
 * format_s - format for %s
 * Return: 0
 */

int format_s(va_list args)
{
	char *s;
	int charCount;

	s = va_arg(args, char*);
	if (s == NULL)
		s = "(nil)";
	charCount = 0;
	while (s[charCount] != '\0')
	{
		_putchar(s[charCount]);
		charCount++;
	}
	return (charCount);
}

/**
 * format_percent - format for %
 */

int format_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}

/**
 * print_d - format for %d
 */

int format_d(va_list args)
{
	int num, charCount;

	num = va_arg(args, int);
	charCount = _putnum(num);
	return (charCount);
}