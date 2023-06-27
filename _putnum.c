#include "main.h"

/**
 * _putnum - prints numbers
 * @n: int
 * Return: charCount
 */

int _putnum(int n)
{
	int charCount;
	int check;
	unsigned int num;

	check = 1;
	charCount = 0;
	if (n < 0)
	{
		charCount += _putchar('-');
		num = n * -1;
	}
	else
	{
		num = n;
	}
	for (; num / check > 9;)
	{
		check *= 10;
	}
	while (check != 0)
	{
		charCount += _putchar('0' + num / check);
		num %= check;
		check /= 10;
	}
	return (charCount);
}
