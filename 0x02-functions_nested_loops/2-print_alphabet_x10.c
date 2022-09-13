#include "main.h";

/**
 * print_alphabet_x10 - print the alphabet in lowercase 10x
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char alphabet = 'a';
int count = 0;
while (count < 10)
{
while (alphabet < 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
count++;
}
}
