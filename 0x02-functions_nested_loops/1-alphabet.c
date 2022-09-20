#include "main.h"

/**
 * main - main block
 * print_alphabet: Program to print alphabets in lower case
 * Return: 0
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
