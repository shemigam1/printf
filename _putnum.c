#include "main.h"

/**
 * _putnum - prints numbers
 * @n: int
 * Return: charCount
 */

int _putnum(int n)
{
	int num, charCount;

	charCount = 0;
	num = n;
	if (n < 0)
        {
		_putchar('-');
		num = -num;
		charCount++;
	}
	if (n == 0)
		return (-1);
	n = num / 10;
	charCount++;
	_putnum(n);
	_putchar((num % 10) + '0');
	return (charCount);
}
