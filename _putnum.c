#include "main.h"

/**
 * _putnum - prints numbers
 * @n: int
 * Return: charCount
 */

int _putnum(int n)
{
	int charCount;
	int flag;
	unsigned int num;

	flag = 1;
	charCount = 0;
	if (n < 0)
	{
		charCount += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	while (num / flag > 9)
	{
		flag *= 10;
	}
	while (flag != 0)
	{
		charCount += _putchar('0' + num / flag);
		num %= flag;
		flag /= 10;
	}
	return (charCount);
}
