#include "main.h"

/**
 * _puts - prints a string
 * @str: string to be printed out
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	/* _putchar('\n'); */
}
