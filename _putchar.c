#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the character to print
 *
 * Return: on success 1
 * on error, -1 is returned 0 err
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
