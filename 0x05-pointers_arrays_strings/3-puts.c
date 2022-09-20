#include "main.h"

/**
 * _puts - Prints a string
 * @str: Pointer to an int that will be updated
 *
 * Return: Void meaning output is correct
 */

void _puts(char *str)
{
	char *c;
	int i;

	c = str;

	for (i = 0; c[i]; i++)
	{
		_putchar (c[i]);
	}
	_putchar ('\n');
}
