#include "main.h"

/**
 * _putnum - prints number
 * @n: int
 * Return: void
 */

void _putnum(int n)
{
	unsigned int num;

	num = n;
	if (n < 0)
	{
		num = -num;
		_putchar('-');
	}
	if (num / 10 != 0)
	{
		n = num / 10;
		_putnum(n);
	}
	_putchar(num % 10 + '0');
}
