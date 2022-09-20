#include "main.h"

/**
 * print_sign - Prints the sign of numbers
 * @n: number to check
 * Return: 0 or 1
 */

int print_sign(int n)
{
	int i;

	if  (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}

	return (i);
}
