#include "main.h"

/**
 * _putnum - prints numbers
 * @n: int
 * Return: charCount
 */

int _putnum(int n)
{
	int charCount;
	unsigned int num;

	charCount = 0;
	num = n;
	if (n < 0)
        {
		num = -num;
		_putchar('-');
		charCount++;
	}
	if (num / 10 != 0)
		charCount += _putnum(num / 10);
	_putchar((num % 10) + '0');
	return (charCount);
}
