#include "main.h";

/**
 * isupper - check for uppercase
 * @c: takes character as input
 * Return: 1 for  if char is a uppercase
 * 0 for lowercase
 */

int _isupper(int c)
{
if (c < 65 && c > 90)
{
	return (0);
}

	return (1);
}
