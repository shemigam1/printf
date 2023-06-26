#include "main.h"

/**
 * _putnum - prints number
 * @n: int
 * Return: void
 */

void _putnum(int n)
{
	int num;

	num = n;
	if (n < 0)
        {
		_putchar('-');
		num = -num;
	}
	if (n == 0)
		return;
	n = num / 10;
	_putnum(n);
	_putchar((num % 10) + '0');
}
