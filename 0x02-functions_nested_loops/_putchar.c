#include <stdio.h>
/**
 * _putchar - write the character to the stdout
 * @c: the character to print
 * Return: 1 on succes.
 * -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
