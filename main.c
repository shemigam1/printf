#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of file
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    /*unsigned int ui;
    void *addr;*/

    len = _printf("hello %s %c%\n", "sand", 'a');
    len2 = printf("hello %s %c%\n", "sand", 'a');
    printf("%d %d\n", len, len2);
    return (0);
}
