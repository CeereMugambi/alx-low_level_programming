#include "main.h"

/**
 * print_numbers - print 0 - 9
 * only use putchar twice
 * Return: 0
 */
 
void print_numbers(void)
{
	int i = 0;

	do{

		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);
	_putchar('\n');
}
